/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   p4_choose_mode.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksever <ksever@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/09 22:29:43 by ksever            #+#    #+#             */
/*   Updated: 2014/03/09 23:23:06 by ksever           ###   ########.fr       */
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

static void		p4_mode_prompt(void)
{
	ft_putendl("Please choose your mode:");
	ft_putendl("1 = Human vs AI");
	ft_putendl("2 = Human vs Human");
}

static void		p4_mode_error(t_p4 *cfg, int entered)
{
	if (entered != 1 && entered != 2)
		ft_putendl("The value entered is invalid. Please enter 1 or 2.");
	else
		return ;
}

static int		p4_choice_prompt(t_p4 *cfg)
{
	char		*line;
	int			entered;
	t_bool		ok;

	ok = false;
	line = NULL;
	p4_mode_prompt();
	while (ok == false)
	{
		ft_putendl("Enter your choice:");
		if (ft_get_next_line(0, &line) == -1)
			return (ft_error(cfg->appname, "get_next_line", 1, -1));
		ok = false;
		if (is_number(line))
		{
			entered = ft_atoi(line);
			p4_mode_error(cfg, entered);
			ok = (entered != 1 && entered != 2 ? false : true);
		}
		else
			ft_putendl("The value entered is not a number. Please retry.");
		if (line)
			ft_strdel(&line);
	}
	return (entered);
}

int		p4_choose_mode(t_p4 *cfg)
{
	int		mode;

	mode = p4_choice_prompt(cfg);
	if (mode == 1)
		return (p4_loop(cfg));
	else
		return (p4_loop_humans(cfg));
}
