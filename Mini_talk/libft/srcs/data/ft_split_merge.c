/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_merge.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drabahi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/09 20:30:20 by drabahi           #+#    #+#             */
/*   Updated: 2014/02/09 20:30:22 by drabahi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_string.h"

char	*ft_split_merge(char **split, char *delimiter)
{
	char	*retstr;
	char	*tmp;
	int		i;

	if (!split)
		return (NULL);
	i = 0;
	retstr = "";
	while (split[i])
	{
		tmp = retstr;
		retstr = ft_strjoin(retstr, split[i]);
		if (i > 0)
			free(tmp);
		tmp = retstr;
		retstr = ft_strjoin(retstr, delimiter);
		free(tmp);
		i++;
	}
	return (ft_strtrim(retstr));
}

