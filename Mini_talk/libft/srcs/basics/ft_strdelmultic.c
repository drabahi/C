/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdelmultic.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drabahi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/09 19:38:16 by drabahi           #+#    #+#             */
/*   Updated: 2014/02/09 19:38:20 by drabahi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strdelmultic(char const *str, char c)
{
	int		i;
	int		j;
	char	*ret;

	i = 0;
	j = 0;
	if (!(ret = malloc(ft_strlen(str) + 1)) || !str)
		return (NULL);
	while (*(str + i))
	{
		ret[j] = str[i];
		if (str[i] == c)
		{
			while (str[i] == c)
				i++;
			i--;
		}
		j++;
		i++;
	}
	return (ret);
}

