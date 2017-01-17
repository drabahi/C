/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drabahi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/09 20:26:40 by drabahi           #+#    #+#             */
/*   Updated: 2014/02/09 20:26:41 by drabahi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_output.h"

void	ft_putsplit(char **split)
{
	int		i;

	i = 0;
	while (split[i])
	{
		ft_putendl(split[i]);
		i++;
	}
	if (!i)
		ft_putendl("(null split)");
}

