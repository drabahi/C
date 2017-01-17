/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drabahi <drabahi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/22 18:31:02 by drabahi           #+#    #+#             */
/*   Updated: 2014/04/14 19:54:40 by drabahi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

void				*ft_memccpy(void *s1, const void *s2, int c, size_t n)
{
	size_t			i;
	unsigned char	*tmp;
	unsigned char	*tmp2;

	i = 0;
	tmp = (unsigned char *)s1;
	tmp2 = (unsigned char *)s2;
	while (i < n)
	{
		tmp[i] = tmp2[i];
		if (tmp2[i] == (unsigned char)c)
			return (&tmp[i + 1]);
		i++;
	}
	return (NULL);
}
