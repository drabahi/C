/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drabahi <drabahi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 11:42:38 by drabahi           #+#    #+#             */
/*   Updated: 2014/04/16 16:18:51 by drabahi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	nb;
	int	min;

	i = 0;
	nb = 0;
	min = 0;
	while (str[i] == ' ' || (str[i] >= 8 && str[i] <= 14))
		i++;
	if (str[i] == '-')
	{
		i++;
		min++;
	}
	else if (str[i] == '+')
		i++;
	while (ft_isdigit(str[i]))
	{
		nb = nb * 10;
		nb = nb + str[i] - '0';
		i++;
	}
	if (min > 0)
		return (-nb);
	return (nb);
}
