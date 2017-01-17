/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drabahi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/09 19:33:29 by drabahi           #+#    #+#             */
/*   Updated: 2014/02/09 19:33:31 by drabahi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_memory.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t					i;
	const unsigned char		*ptr;

	i = 0;
	ptr = s;
	if (!s)
		return (NULL);
	while (i < (n - 1) && ptr[i] != '\0' && ptr[i] != (char)c)
		i++;
	if (ptr[i] == c)
		return ((char*)(ptr + i));
	return (NULL);
}

