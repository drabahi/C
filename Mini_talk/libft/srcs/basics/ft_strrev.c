/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drabahi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/09 19:45:09 by drabahi           #+#    #+#             */
/*   Updated: 2014/02/09 19:45:11 by drabahi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrev(char const *str)
{
	size_t	i;
	int		j;
	char	*reverse;

	if (!(reverse = ft_memalloc(ft_strlen(str) * sizeof(char))))
		return (NULL);
	i = 0;
	j = 1;
	while (i < ft_strlen(str))
	{
		*(reverse + i) = *(str + (ft_strlen(str) - j));
		i++;
		j++;
	}
	reverse[i] = '\0';
	return (reverse);
}

