/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   p4_IA_vert.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksever <ksever@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/09 19:17:42 by ksever            #+#    #+#             */
/*   Updated: 2014/03/09 21:06:31 by ksever           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "puissance4.h"

static int	p4_IA_vert_down(t_p4 *cfg, int line, int col, char mychar)
{
	int		tline;
	int		count;

	count = 0;
	tline = line + 1;
	while (tline <= (line + 3))
	{
		if (tline > 0 && tline < cfg->height)
		{
			if (cfg->board[tline][col] == mychar)
				count++;
			else
				break ;
			tline++;
		}
		else
			break ;
	}
	return (count);
}

int		p4_IA_vert(t_p4 *cfg, int line, int col, char mychar)
{
	return (p4_IA_vert_down(cfg, line, col, mychar));
}
