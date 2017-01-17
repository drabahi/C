/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   p4_loop.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksever <ksever@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/08 15:09:48 by ksever            #+#    #+#             */
/*   Updated: 2014/03/09 23:08:30 by ksever           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "puissance4.h"

static int			p4_display_first_player(void)
{
	ft_putstr("\nThe first player is \033[31mX\033[0m,");
	ft_putendl("the second player is \033[33mO\033[0m");
}

int		p4_loop(t_p4 *cfg)
{
	int				res;
	int				test;
	unsigned long	turn;
	int				(*tab[2])(t_p4 *cfg, char mychar) =
	{
		&p4_IA_play,
		&p4_human_play
	};

	turn = 0;
	p4_display_first_player();
	while ((res = p4_check_win(cfg)) == false)
	{
		p4_display(cfg);
		if ((turn % 2) == 0)
			test = p4_play(cfg, tab[cfg->pstarts], turn % 2);
		else
			test = p4_play(cfg, tab[!(cfg->pstarts)], turn % 2);
		turn++;
		if (test == false)
			return (EXIT_FAILURE);
	}
	return (res);
}
