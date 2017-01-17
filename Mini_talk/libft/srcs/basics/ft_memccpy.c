/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drabahi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/09 19:33:14 by drabahi           #+#    #+#             */
/*   Updated: 2014/02/09 19:33:17 by drabahi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_memory.h"

void	*ft_memccpy(void *s1, const void *s2, int c, size_t n)
{
	size_t			i;
	unsigned char	uc;
	unsigned char	*tmp1;
	unsigned char	*tmp2;

	tmp1 = (unsigned char *)s1;
	tmp2 = (unsigned char *)s2;
	uc = (unsigned char)c;
	i = 0;
	while (i < n && tmp1 && tmp2 && (tmp2[i] != uc))
	{
		tmp1[i] = tmp2[i];
		i++;
	}
	if (tmp2[i] == uc && i < n)
	{
		tmp1[i] = tmp2[i];
		return ((void *)&tmp1[i + 1]);
	}
	return (NULL);
}

