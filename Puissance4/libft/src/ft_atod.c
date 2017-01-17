/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atod.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksever <ksever@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/12 15:36:12 by ksever            #+#    #+#             */
/*   Updated: 2014/02/12 16:04:01 by ksever           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

double		ft_atod(char *str)
{
	double		res;
	double		fact;
	t_bool		dot_seen;

	res = 0;
	fact = 1;
	dot_seen = false;
	while (ft_isspace(*str))
		str++;
	if (*str == '+' || *str == '-')
		fact = (*str == '-' ? (str++, -1) : (str++, 1));
	while ((ft_isdigit(*str) || *str == '.') && *str != '\0')
	{
		if (dot_seen == false && *str == '.')
			dot_seen = true;
		else if (ft_isdigit(*str))
		{
			if (dot_seen)
				fact /= 10.0;
			res = res * 10.0 + (double)(*str - '0');
		}
		str++;
	}
	return (res * fact);
}
