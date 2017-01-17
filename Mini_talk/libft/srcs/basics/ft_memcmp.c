/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drabahi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/09 19:33:42 by drabahi           #+#    #+#             */
/*   Updated: 2014/02/09 19:33:43 by drabahi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_memory.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	int				diff;
	unsigned char	ptr1;
	unsigned char	ptr2;

	i = 0;
	diff = 0;
	if (!s1)
		ptr1 = 0;
	if (!s2)
		ptr2 = 0;
	while (i < n && !diff)
	{
		ptr1 = ((unsigned char*)s1)[i];
		ptr2 = ((unsigned char*)s2)[i];
		diff = (int)(ptr1 - ptr2);
		i++;
	}
	return (diff);
}

