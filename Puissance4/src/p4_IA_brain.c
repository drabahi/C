/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   p4_IA_brain.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksever <ksever@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/09 19:17:42 by ksever            #+#    #+#             */
/*   Updated: 2014/03/09 22:13:18 by ksever           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "puissance4.h"

static int	p4_crucial_move(t_p4 *cfg, char mychar, int line, int col)
{
	if (p4_IA_horiz(cfg, line, col, mychar) == 3)
		return (100);
	else if (p4_IA_vert(cfg, line, col, mychar) == 3)
		return (100);
	else if (p4_IA_diag_one(cfg, line, col, mychar) == 3)
		return (100);
	else if (p4_IA_diag_two(cfg, line, col, mychar) == 3)
		return (100);
	if (mychar == 'o')
		mychar = 'x';
	else
		mychar = 'o';
	if (p4_IA_horiz(cfg, line, col, mychar) == 3)
		return (100);
	else if (p4_IA_vert(cfg, line, col, mychar) == 3)
		return (100);
	else if (p4_IA_diag_one(cfg, line, col, mychar) == 3)
		return (100);
	else if (p4_IA_diag_two(cfg, line, col, mychar) == 3)
		return (100);
	return (0);
}

static int	p4_probe_move(t_p4 *cfg, char mychar, int line, int col)
{
	int		total;

	total = 0;
	total += p4_IA_horiz(cfg, line, col, mychar) * 3;
	total += p4_IA_vert(cfg, line, col, mychar) * 3;
	total += p4_IA_diag_one(cfg, line, col, mychar) * 3;
	total += p4_IA_diag_two(cfg, line, col, mychar) * 3;
	if (mychar == 'o')
		mychar = 'x';
	else
		mychar = 'o';
	total += p4_IA_horiz(cfg, line, col, mychar) * 2;
	total += p4_IA_vert(cfg, line, col, mychar) * 2;
	total += p4_IA_diag_one(cfg, line, col, mychar) * 2;
	total += p4_IA_diag_two(cfg, line, col, mychar) * 2;
	return (total);
}

static int	p4_default_move(t_p4 *cfg, char mychar, int line, int col)
{
	if (line == (cfg->height - 1) && col == (cfg->width / 2))
		return (3);
	else if ((col == ((cfg->width / 2) + 1)
				|| col == ((cfg->width / 2) - 1)))
		return (2);
	else
		return (1);
}

int			p4_IA_weight(t_p4 *cfg, int ***probe, char mychar)
{
	int		line;
	int		col;
	int		**table;

	line = 0;
	table = *probe;
	while (line < cfg->height)
	{
		col = 0;
		while (col < cfg->width)
		{
			if (table[line][col] < 0)
			{
				col++;
				continue ;
			}
			table[line][col] += p4_crucial_move(cfg, mychar, line, col);
			table[line][col] += p4_probe_move(cfg, mychar, line, col);
			table[line][col] += p4_default_move(cfg, mychar, line, col);
			col++;
		}
		line++;
	}
	*probe = table;
	return (1);
}
