/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drabahi <drabahi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/22 18:33:32 by drabahi           #+#    #+#             */
/*   Updated: 2014/04/14 19:55:13 by drabahi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*tmp;

	i = 0;
	tmp = (unsigned char *)s;
	while (i < n && tmp[i] != '\0')
	{
		if (tmp[i] == (unsigned char)c)
			return (&tmp[i]);
		while (tmp[i] != (unsigned char)c)
		{
			i++;
		}
	}
	return (NULL);
}
