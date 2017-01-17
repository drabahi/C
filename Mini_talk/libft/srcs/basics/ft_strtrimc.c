/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrimc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drabahi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/09 19:46:28 by drabahi           #+#    #+#             */
/*   Updated: 2014/02/09 19:46:30 by drabahi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrimc(char const *s, char c)
{
	char	*ret;
	int		i;
	int		j;

	while (*s && *s == c)
		s++;
	i = ft_strlen(s) - 1;
	j = 0;
	while (i > 0 && s[i] == c)
	{
		j++;
		i--;
	}
	if ((ret = ft_memalloc(ft_strlen(s) - j + 1)))
		return (ft_strncpy(ret, s, ft_strlen(s) - j));
	else
		return ((char*)s);
}

