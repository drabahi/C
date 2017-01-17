/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   p4_init.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksever <ksever@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/08 14:28:10 by ksever            #+#    #+#             */
/*   Updated: 2014/03/09 21:38:05 by ksever           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <time.h>
#include "puissance4.h"

static t_bool		is_number(char *str)
{
	if (ft_strlen(str) == 0)
		return (false);
	while (*str)
	{
		if (ft_isdigit(*str) == false)
			return (false);
		str++;
	}
	return (true);
}

static t_bool		p4_gen_board(t_p4 *cfg, int lines, int cols)
{
	char		**board;
	char		*cell;
	int			tmp;

	if ((board = (char **)malloc(sizeof(char *) * (lines + 1))) == NULL)
		return (ft_error(cfg->appname, "malloc", 1, false));
	board[lines] = '\0';
	while (lines--)
	{
		if ((board[lines] = (char *)malloc(sizeof(char) * (cols + 1))) == NULL)
			return (ft_error(cfg->appname, "malloc", 1, false));
		board[lines][cols] = '\0';
		tmp = cols;
		while (tmp--)
			board[lines][tmp] = '.';
	}
	cfg->board = board;
	return (true);
}

int					p4_init(t_p4 *cfg, int argc, char **argv)
{
	time_t			seconds;
	int				res;

	cfg->appname = argv[0];
	if (argc != 3)
		return (ft_error(cfg->appname, "Usage: ./puissance4 <height> <width>",
				0, false));
	if (!is_number(argv[1]) || !is_number(argv[2]))
		return (ft_error(cfg->appname, "Invalid value for height and/or width",
				0, false));
	if ((cfg->height = ft_atoi(argv[1])) < 6)
		return (ft_error(cfg->appname, "Minimum value for height is 6.",
				0, false));
	if ((cfg->width = ft_atoi(argv[2])) < 7)
		return (ft_error(cfg->appname, "Minimum value for width is 7.",
				0, false));
	if (!p4_gen_board(cfg, cfg->height, cfg->width))
		return (false);
	if ((seconds = time(NULL)) == (time_t)-1)
		return (ft_error(cfg->appname, "time", 1, false));
	srand(seconds);
	cfg->pstarts = rand() % 2;
	return (true);
}
