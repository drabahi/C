/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   p4_checks.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksever <ksever@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/08 15:28:15 by ksever            #+#    #+#             */
/*   Updated: 2014/03/09 21:21:20 by ksever           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "puissance4.h"

t_bool	p4_check_horizontal(t_p4 *cfg, int line, int col, char player)
{
	if (col + 3 < cfg->width)
	{
		if (cfg->board[line][col + 1] == player
			&& cfg->board[line][col + 2] == player
			&& cfg->board[line][col + 3] == player)
			return (true);
		else
			return (false);
	}
	return (false);
}

t_bool	p4_check_vertical(t_p4 *cfg, int line, int col, char player)
{
	if (line + 3 < cfg->height)
	{
		if (cfg->board[line + 1][col] == player
			&& cfg->board[line + 2][col] == player
			&& cfg->board[line + 3][col] == player)
			return (true);
		else
			return (false);
	}
	return (false);
}

t_bool	p4_check_diagonal(t_p4 *cfg, int line, int col, char player)
{
	if (col + 3 < cfg->width && line + 3 < cfg->height)
	{
		if (cfg->board[line + 1][col + 1] == player
			&& cfg->board[line + 2][col + 2] == player
			&& cfg->board[line + 3][col + 3] == player)
			return (true);
	}
	if (col + 3 < cfg->width && line - 3 > 0)
	{
		if (cfg->board[line - 1][col + 1] == player
			&& cfg->board[line - 2][col + 2] == player
			&& cfg->board[line - 3][col + 3] == player)
			return (true);
	}
	return (false);
}
