/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksever <ksever@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/07 20:55:43 by ksever            #+#    #+#             */
/*   Updated: 2014/03/09 22:56:02 by ksever           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "puissance4.h"

int		main(int argc, char **argv)
{
	t_p4		cfg;
	int			ret;

	if (p4_init(&cfg, argc, argv) != 1)
		return (1);
	ft_putendl("\n~~~~ PUISSANCE 4 ~~~~\n");
	ret = p4_choose_mode(&cfg);
	ft_strsplit_clean(&cfg.board);
	return (ret);
}
