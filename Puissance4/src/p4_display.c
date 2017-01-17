/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   p4_display.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksever <ksever@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/08 15:23:25 by ksever            #+#    #+#             */
/*   Updated: 2014/03/09 22:55:15 by ksever           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "puissance4.h"

static int		p4_display_header(t_p4 *cfg)
{
	int		col;

	col = 0;
	ft_putstr("\033[34m|");
	while (col < cfg->width)
	{
		ft_putstr(" ");
		ft_putnbr(col % 10);
		ft_putstr(" |");
		col++;
	}
	ft_putstr("\033[0m\n");
}

static int		p4_print_piece(char piece)
{
	ft_putstr(" ");
	if (piece == 'o')
	{
		ft_putstr("\033[33m");
		ft_putchar('O');
	}
	else if (piece == 'x')
	{
		ft_putstr("\033[31m");
		ft_putchar('X');
	}
	else
		ft_putchar(piece);
	ft_putstr("\033[0m \033[34m|\033[0m");
}

int				p4_display(t_p4 *cfg)
{
	int		col;
	int		line;

	p4_display_header(cfg);
	line = 0;
	while (line < cfg->height)
	{
		col = 0;
		ft_putstr("\033[34m|\033[0m");
		while (col < cfg->width)
		{
			p4_print_piece(cfg->board[line][col]);
			col++;
		}
		ft_putstr("\n");
		line++;
	}
}
