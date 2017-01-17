/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vletarou <vletarou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/21 10:56:36 by ksever            #+#    #+#             */
/*   Updated: 2014/03/06 13:21:54 by vletarou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	length;
	size_t	total_length;

	length = 0;
	total_length = ft_strlen(src) + ft_strlen(dst);
	while (length < size && *dst)
	{
		dst++;
		length++;
	}
	if (size <= length)
		return (size + ft_strlen(src));
	while (length < (size - 1) && *src)
	{
		*dst++ = *src++;
		length++;
	}
	*dst = '\0';
	return (total_length);
}

