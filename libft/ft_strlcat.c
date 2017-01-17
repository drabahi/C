/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drabahi <drabahi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/21 16:41:06 by drabahi           #+#    #+#             */
/*   Updated: 2014/04/14 20:09:10 by drabahi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	char			*tmpd;
	const char		*tmps;
	unsigned int	i;
	unsigned int	len;

	tmpd = dst;
	tmps = src;
	i = size;
	while (i-- > 0 && *tmpd != '\0')
		tmpd++;
	len = tmpd - dst;
	i = size - len;
	if (i == 0)
		return (len + ft_strlen(tmps));
	while (*tmps != '\0')
	{
		if (i != 1)
		{
			*tmpd++ = *tmps;
			i--;
		}
		tmps++;
	}
	*tmpd = '\0';
	return (len + (tmps - src));
}
