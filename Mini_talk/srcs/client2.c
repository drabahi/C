/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client2.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drabahi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/08 19:36:57 by drabahi           #+#    #+#             */
/*   Updated: 2014/02/08 19:37:49 by drabahi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "client.h"

int		ft_kill(pid_t pid, char bitsend)
{
	if (bitsend == 1)
		return (kill(pid, FT_SIGONE));
	else
		return (kill(pid, FT_SIGZERO));
}

void	ft_sigsend_char(pid_t pid, char c)
{
	int	curbit;

	curbit = 0;
	while (curbit < 8)
	{
		ft_kill(pid, (char)(c % 2));
		pause();
		c = c >> 1;
		curbit++;
	}
}

