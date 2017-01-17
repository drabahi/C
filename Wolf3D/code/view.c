/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   view.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drabahi <drabahi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/09 19:35:52 by drabahi           #+#    #+#             */
/*   Updated: 2014/01/18 22:18:21 by drabahi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"
#include <stdlib.h>

void	pos_eye(t_env *e)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (e->map[i])
	{
		while (e->map[i][j])
		{
			if (ft_strcmp(e->map[i][j], "0") == 0)
			{
				e->pos->x = j + 0.5;
				e->pos->y = i + 0.5;
//				e->h = 0;
				return ;
			}
			j++;
		}
		i++;
	}
	free_all(e);
	exit(0);
}

int	wall(const char *coord)
{
	if (ft_strcmp(coord, "A") == 0)
		return (1);
	if (ft_isnb(coord) && coord[0] != '0')
		return (2);
	return (0);
}

int	loop_hook(t_env *e)
{
	draw_window(e);
	return (0);
}
