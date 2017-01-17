/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_abs.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksever <ksever@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/19 17:52:48 by ksever            #+#    #+#             */
/*   Updated: 2013/12/21 21:28:00 by ksever           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <limits.h>

long	ft_abs(long nbr)
{
	if (nbr == LONG_MIN)
		return (0);
	else if (nbr < 0)
		return (-nbr);
	else
		return (nbr);
}