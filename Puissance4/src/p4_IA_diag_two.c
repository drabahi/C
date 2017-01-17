/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   p4_IA_diag_two.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksever <ksever@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/09 19:17:42 by ksever            #+#    #+#             */
/*   Updated: 2014/03/09 21:07:09 by ksever           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "puissance4.h"

static int	p4_IA_diag_two_up(t_p4 *cfg, int line, int col, char mychar)
{
	int		tline;
	int		tcol;
	int		count;

	count = 0;
	tline = line - 1;
	tcol = col + 1;
	while (tline >= (line - 3) && tcol <= (col + 3))
	{
		if (tline > 0 && tline < cfg->height && tcol > 0
			&& tcol < cfg->width)
		{
			if (cfg->board[tline][tcol] == mychar)
				count++;
			else
				break ;
			tcol++;
			tline--;
		}
		else
			break ;
	}
	return (count);
}

static int	p4_IA_diag_two_down(t_p4 *cfg, int line, int col, char mychar)
{
	int		tline;
	int		tcol;
	int		count;

	count = 0;
	tline = line + 1;
	tcol = col - 1;
	while (tline <= (line + 3) && tcol >= (col - 3))
	{
		if (tline > 0 && tline < cfg->height && tcol > 0
			&& tcol < cfg->width)
		{
			if (cfg->board[tline][tcol] == mychar)
				count++;
			else
				break ;
			tcol--;
			tline++;
		}
		else
			break ;
	}
	return (count);
}

int		p4_IA_diag_two(t_p4 *cfg, int line, int col, char mychar)
{
	return (p4_IA_diag_two_up(cfg, line, col, mychar)
			+ p4_IA_diag_two_down(cfg, line, col, mychar));
}
