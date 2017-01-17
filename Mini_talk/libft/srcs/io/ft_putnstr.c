/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drabahi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/09 20:34:46 by drabahi           #+#    #+#             */
/*   Updated: 2014/02/09 20:34:48 by drabahi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <string.h>

char	*ft_putnstr(const char *str, size_t n)
{
	if (str && n > 0)
	{
		write(1, str, n);
		return ((char *)str + n);
	}
	return ((char *)str);
}

