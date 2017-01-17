/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   p4_human_play.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksever <ksever@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/08 15:29:30 by ksever            #+#    #+#             */
/*   Updated: 2014/03/09 23:21:58 by ksever           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "puissance4.h"

static t_bool		is_number(char *str)
{
	if (ft_strlen(str) == 0)
		return (false);
	if (*str == '-')
		str++;
	while (*str)
	{
		if (ft_isdigit(*str) == false)
			return (false);
		str++;
	}
	return (true);
}

static void			p4_display_error(t_p4 *cfg, int entered)
{
	if (entered < 0)
		ft_putendl("The value entered is negative. Please retry.");
	else if (entered > cfg->width)
		ft_putendl("The value entered is too big. Please retry.");
	else
		return ;
}

static void			p4_player_prompt(char mychar)
{
	ft_putstr("\nYou are ");
	if (mychar == 'o')
	{
		ft_putstr("\033[33m");
		ft_putchar('O');
	}
	else if (mychar == 'x')
	{
		ft_putstr("\033[31m");
		ft_putchar('X');
	}
	ft_putstr("\033[0m. ");
	ft_putstr("Please choose a column: ");
}

int					p4_human_play(t_p4 *cfg, char mychar)
{
	char		*line;
	int			entered;
	t_bool		ok;

	ok = false;
	line = NULL;
	while (ok == false)
	{
		p4_player_prompt(mychar);
		if (ft_get_next_line(0, &line) == -1)
			return (ft_error(cfg->appname, "get_next_line", 1, -1));
		ok = false;
		if (is_number(line))
		{
			entered = ft_atoi(line);
			p4_display_error(cfg, entered);
			ok = (entered < 0 || entered > cfg->width ? false : true);
		}
		else
			ft_putendl("The value entered is not a number. Please retry.");
		if (line)
			ft_strdel(&line);
	}
	return (entered);
}
