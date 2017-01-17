/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   p4_IA_play.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksever <ksever@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/08 15:29:30 by ksever            #+#    #+#             */
/*   Updated: 2014/03/09 22:09:04 by ksever           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "puissance4.h"

static int		p4_IA_init_cell(t_p4 *cfg, int line, int col)
{
	if (cfg->board[line][col] == '.')
	{
		if ((line + 1) < cfg->height)
		{
			if (cfg->board[line + 1][col] != '.')
				return (0);
			else
				return (-1);
		}
		else
			return (0);
	}
	else
		return (-1);
}

static int		p4_IA_init(t_p4 *cfg, int ***probe, char mychar)
{
	int		line;
	int		col;
	int		**table;

	if ((table = (int **)malloc(sizeof(int *) * cfg->height)) == NULL)
		return (ft_error(cfg->appname, "malloc", 1, -1));
	line = 0;
	while (line < cfg->height)
	{
		if ((table[line] = (int *)malloc(sizeof(int) * cfg->width)) == NULL)
			return (ft_error(cfg->appname, "malloc", 1, -1));
		col = 0;
		while (col < cfg->width)
		{
			table[line][col] = p4_IA_init_cell(cfg, line, col);
			col++;
		}
		line++;
	}
	*probe = table;
	return (true);
}

static int		p4_place_column(t_p4 *cfg, int **probe)
{
	int		bigst_v;
	int		bigst_col;
	int		line;
	int		col;

	bigst_v = 0;
	bigst_col = -1;
	line = 0;
	while (line < cfg->height)
	{
		col = 0;
		while (col < cfg->width)
		{
			if (probe[line][col] < 0)
			{
				col++;
				continue ;
			}
			bigst_col = probe[line][col] > bigst_v ? col : bigst_col;
			bigst_v = probe[line][col] > bigst_v ? probe[line][col] : bigst_v;
			col++;
		}
		line++;
	}
	return (bigst_col);
}

static int		p4_IA_clean(t_p4 *cfg, int ***probe)
{
	int		idx;
	int		**table;

	if (!*probe)
		return (1);
	table = *probe;
	idx = 0;
	while (idx < cfg->height)
	{
		free(table[idx]);
		table[idx] = NULL;
		idx++;
	}
	free(*probe);
	*probe = NULL;
	return (1);
}

int				p4_IA_play(t_p4 *cfg, char mychar)
{
	int		**probe;
	int		choice;

	if (p4_IA_init(cfg, &probe, mychar) != 1)
		return (-1);
	if (p4_IA_weight(cfg, &probe, mychar) != 1)
		return (-1);
	choice = p4_place_column(cfg, probe);
	if (p4_IA_clean(cfg, &probe) == -1)
		return (-1);
	return (choice);
}
