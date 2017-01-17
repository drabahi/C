/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_join.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drabahi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/09 20:29:55 by drabahi           #+#    #+#             */
/*   Updated: 2014/02/09 20:29:57 by drabahi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "ft_split.h"

char	**ft_split_join(char **split1, char **split2)
{
	char	**ret_split;
	int		i;

	if (split1 && !split2)
		return (ft_split_cpy(split1));
	else if (!split1 && split2)
		return (ft_split_cpy(split2));
	else if (!split1 && !split2)
		return (NULL);
	ret_split = ft_split_cpy(split1);
	i = 0;
	while (split2[i])
	{
		ret_split = ft_split_add(ret_split, split2[i]);
		i++;
	}
	return (ret_split);
}

