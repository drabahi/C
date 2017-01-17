/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   p4_IA_horiz.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksever <ksever@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/09 19:17:42 by ksever            #+#    #+#             */
/*   Updated: 2014/03/09 21:07:04 by ksever           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "puissance4.h"

static int	p4_IA_horiz_left(t_p4 *cfg, int line, int col, char mychar)
{
	int		tcol;
	int		count;

	count = 0;
	tcol = col - 1;
	while (tcol >= (col - 3))
	{
		if (tcol > 0 && tcol < cfg->width)
		{
			if (cfg->board[line][tcol] == mychar)
				count++;
			else
				break ;
			tcol--;
		}
		else
			break ;
	}
	return (count);
}

static int	p4_IA_horiz_right(t_p4 *cfg, int line, int col, char mychar)
{
	int		tcol;
	int		count;

	count = 0;
	tcol = col + 1;
	while (tcol <= (col + 3))
	{
		if (tcol > 0 && tcol < cfg->width)
		{
			if (cfg->board[line][tcol] == mychar)
				count++;
			else
				break ;
			tcol++;
		}
		else
			break ;
	}
	return (count);
}

int			p4_IA_horiz(t_p4 *cfg, int line, int col, char mychar)
{
	return (p4_IA_horiz_left(cfg, line, col, mychar)
			+ p4_IA_horiz_right(cfg, line, col, mychar));
}
