/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_add.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drabahi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/09 20:28:41 by drabahi           #+#    #+#             */
/*   Updated: 2014/02/09 20:28:42 by drabahi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_standard_helpers.h"
#include "ft_string.h"
#include "ft_memory.h"
#include "ft_split.h"

char	**ft_split_add(char **split, char *str)
{
	char	**ret_split;
	int		nstr;
	int		i;

	if (!(nstr = ft_split_len(split)))
		return (ft_split_create(str));
	ret_split = (char **)ft_memalloc((nstr + 2) * PTRSIZE);
	nstr = 0;
	while (split[nstr])
	{
		ret_split[nstr] = (char *)ft_memalloc(ft_strlen(split[nstr]) + 1);
		i = 0;
		while (split[nstr][i])
		{
			ret_split[nstr][i] = split[nstr][i];
			i++;
		}
		nstr++;
	}
	ret_split[nstr] = (char *)ft_memalloc(ft_strlen(str) + 1);
	ret_split[nstr] = ft_strncpy(ret_split[nstr], str, ft_strlen(str));
	ft_memdel((void **)&split);
	return (ret_split);
}

