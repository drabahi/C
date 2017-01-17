/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drabahi <drabahi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/22 18:32:22 by drabahi           #+#    #+#             */
/*   Updated: 2014/04/14 19:56:24 by drabahi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

void	*ft_memmove(void *s1, const void *s2, size_t n)
{
	unsigned char	*tmp;
	unsigned char	*tmp2;
	size_t			i;

	i = 0;
	tmp2 = (unsigned char *)s2;
	tmp = (unsigned char *)s1;
	if (tmp2 > tmp)
		return (ft_memcpy(tmp, tmp2, n));
	else
	{
		i = i + (n - 1);
		while (n > 0)
		{
			tmp[i] = tmp2[i];
			n--;
			i--;
		}
		return (tmp);
	}
}
