/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   p4_check_win.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksever <ksever@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/08 15:28:15 by ksever            #+#    #+#             */
/*   Updated: 2014/03/09 23:09:31 by ksever           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "puissance4.h"

static int	p4_display_winner(t_p4 *cfg, char player, int retval)
{
	p4_display(cfg);
	ft_putstr("== Player ");
	if (player == 'x')
		ft_putstr("1 (\033[31m");
	else
		ft_putstr("2 (\033[33m");
	ft_putchar(player - 'a' + 'A');
	ft_putstr("\033[0m) wins ! ==\n");
	return (retval);
}

static t_bool	p4_check_here(t_p4 *cfg, int line, int col, char player)
{
	if (player != '.')
	{
		if (p4_check_horizontal(cfg, line, col, player))
			return (p4_display_winner(cfg, player, true));
		else if (p4_check_vertical(cfg, line, col, player))
			return (p4_display_winner(cfg, player, true));
		else if (p4_check_diagonal(cfg, line, col, player))
			return (p4_display_winner(cfg, player, true));
		else
			return (false);
	}
	return (false);
}

int				p4_check_win(t_p4 *cfg)
{
	int		col;
	int		line;
	char	c;
	int		empty;

	empty = 0;
	line = 0;
	while (line < cfg->height)
	{
		col = -1;
		while (++col < cfg->width)
		{
			if ((c = cfg->board[line][col]) != '.')
			{
				if (p4_check_here(cfg, line, col, c) == true)
					return (true);
			}
			else
				empty++;
		}
		line++;
	}
	if (empty == 0)
		return (ft_error(cfg->appname, "Draw. No winner.", 0, true));
	return (false);
}
