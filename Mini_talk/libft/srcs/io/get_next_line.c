/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drabahi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/09 20:35:34 by drabahi           #+#    #+#             */
/*   Updated: 2014/02/09 20:35:36 by drabahi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include "libft.h"
#include "get_next_line.h"

static char		*ft_strnjoin(char const *s1, char const *s2, int n, char *m)
{
	int		i;
	int		j;
	char	*ret;
	int		size;

	size = ft_strlen(s1);
	i = 0;
	j = 0;
	if (!(ret = (char *)ft_memalloc(size + n + 1)))
		return (NULL);
	while (i < size)
	{
		ret[i] = s1[i];
		i++;
		j++;
	}
	i = 0;
	while (i < n)
	{
		ret[j] = s2[i];
		i++;
		j++;
	}
	free((void *)m);
	return (ret);
}

static int		ft_strncountc(char const *str, char c, int n)
{
	int		i;
	int		ret;

	i = 0;
	ret = 0;
	while (i < n)
	{
		if (str[i] == c)
			ret++;
		i++;
	}
	return (ret);
}

static int		ft_get_line(char **membuf, char **line, char *buftodel)
{
	int		i;
	char	*tmp;

	i = 0;
	while (**membuf != '\n')
	{
		(*membuf)++;
		i++;
	}
	**membuf = '\0';
	(*membuf)++;
	*line = ft_strdup(*membuf - i - 1);
	tmp = ft_strdup(*membuf);
	free(*membuf - i - 1);
	*membuf = tmp;
	(void)buftodel;
	return (1);
}

static t_gnl	*ft_init_memory(int fd, t_dlist **fdlist)
{
	t_gnl	memory;

	memory.fd = fd;
	memory.membuf = (char *)ft_memalloc(1);
	if (!*fdlist)
		*fdlist = ft_lsd_create(&memory, sizeof(t_gnl));
	else
		*fdlist = ft_lsd_getfirst(*fdlist);
	while ((*fdlist)->next && ((t_gnl *)(*fdlist)->data)->fd != fd)
		*fdlist = (*fdlist)->next;
	if ((*fdlist) && ((t_gnl *)(*fdlist)->data)->fd == fd)
	{
		if (*(((t_gnl *)(*fdlist)->data)->membuf) == 0)
			((t_gnl *)(*fdlist)->data)->membuf = ft_memalloc(1);
		return ((*fdlist)->data);
	}
	else
	{
		*fdlist = ft_lsd_stack(*fdlist, ft_lsd_create(&memory, sizeof(t_gnl)));
		return ((*fdlist)->data);
	}
}

int				get_next_line(int const fd, char **line)
{
	static t_dlist	*fdlist;
	t_gnl			*memory;
	char			*buf;
	int				retread;

	memory = ft_init_memory(fd, &fdlist);
	if (!(buf = ft_memalloc(BUFF_SIZE)) || BUFF_SIZE <= 0)
		return (-1);
	*line = '\0';
	if (ft_strcountc(memory->membuf, '\n') > 0)
		return (ft_get_line(&(memory->membuf), line, buf));
	while ((retread = read(memory->fd, buf, BUFF_SIZE)) > 0)
	{
		memory->membuf = ft_strnjoin(memory->membuf, buf, retread, *line);
		if (ft_strncountc(buf, '\n', retread) != 0)
		{
			ft_memdel((void *)&buf);
			return (get_next_line(memory->fd, line));
		}
	}
	ft_memdel((void *)&buf);
	if (retread == -1)
		return (-1);
	return (0);
}

