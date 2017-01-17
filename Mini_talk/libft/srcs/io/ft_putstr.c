/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drabahi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/09 20:35:06 by drabahi           #+#    #+#             */
/*   Updated: 2014/02/09 20:35:07 by drabahi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_string.h"

int		ft_putstr(char const *s)
{
	size_t	len;

	len = 0;
	if (s)
	{
		len = ft_strlen((char *)s);
		write(1, s, len);
	}
	else
	{
		len = 6;
		write(1, "(null)", len);
	}
	return (len);
}

