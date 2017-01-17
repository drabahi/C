/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drabahi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/09 19:27:26 by drabahi           #+#    #+#             */
/*   Updated: 2014/02/09 19:27:31 by drabahi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_char.h"

int		ft_atoi(const char *str)
{
	int		i;
	int		ret;
	int		isnegative;

	i = 0;
	ret = 0;
	isnegative = 0;
	if (!str)
		return (0);
	if (str[0] == '-')
	{
		isnegative = 1;
		i++;
	}
	else if (str[0] == '+')
		i++;
	while (ft_isdigit(str[i]))
	{
		ret = ret * 10 + (str[i] - 48);
		i++;
	}
	if (isnegative)
		ret = ret * -1;
	return (ret);
}

