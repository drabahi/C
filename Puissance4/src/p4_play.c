/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   p4_play.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksever <ksever@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/08 15:29:30 by ksever            #+#    #+#             */
/*   Updated: 2014/03/09 22:58:20 by ksever           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "puissance4.h"

static t_bool	p4_check_played(t_p4 *cfg, int played_col, char pchar)
{
	int		max;

	max = cfg->height;
	while (max--)
	{
		if (cfg->board[max][played_col] == '.')
		{
			cfg->board[max][played_col] = pchar;
			return (true);
		}
	}
	return (false);
}

static void		p4_display_action(t_p4 *cfg, int played_col, char mychar)
{
	ft_putstr("\n\nPlayer ");
	if (mychar == 'x')
		ft_putstr("1 (\033[31m");
	else
		ft_putstr("2 (\033[33m");
	ft_putchar(mychar - 'a' + 'A');
	ft_putstr("\033[0m) plays in column ");
	ft_putnbr(played_col);
	ft_putstr(".\n");
}

int				p4_play(t_p4 *cfg, int (*choice)(t_p4 *cfg, char mychar),
						unsigned long player)
{
	int		played_col;
	t_bool	ok;
	char	pchar[2] =
	{
		'x',
		'o'
	};

	ok = false;
	while (ok == false)
	{
		played_col = choice(cfg, pchar[player]);
		if (played_col == -1)
			return (false);
		ok = p4_check_played(cfg, played_col, pchar[player]);
		if (ok == false)
			ft_putendl("Wrong column. Please try again.");
		else
			p4_display_action(cfg, played_col, pchar[player]);
	}
	return (true);
}
