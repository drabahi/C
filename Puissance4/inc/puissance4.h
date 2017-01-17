/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   puissance4.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksever <ksever@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/07 20:56:22 by ksever            #+#    #+#             */
/*   Updated: 2014/03/09 22:36:53 by ksever           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUISSANCE4_H
# define PUISSANCE4_H
# include "libft.h"

typedef struct		s_p4
{
	char			*appname;
	char			**board;
	int				width;
	int				height;
	short			pstarts;
}					t_p4;

int		p4_init(t_p4 *cfg, int argc, char **argv);
int		p4_loop(t_p4 *cfg);
int		p4_loop_humans(t_p4 *cfg);
int		p4_play(t_p4 *cfg, int (*choice)(t_p4 *cfg, char mychar),
				unsigned long player);
int		p4_human_play(t_p4 *cfg, char mychar);
int		p4_IA_play(t_p4 *cfg, char mychar);
int		p4_IA_weight(t_p4 *cfg, int ***probe, char mychar);
int		p4_IA_horiz(t_p4 *cfg, int line, int col, char mychar);
int		p4_IA_vert(t_p4 *cfg, int line, int col, char mychar);
int		p4_IA_diag_one(t_p4 *cfg, int line, int col, char mychar);
int		p4_IA_diag_two(t_p4 *cfg, int line, int col, char mychar);
int		p4_display(t_p4 *cfg);
int		p4_check_win(t_p4 *cfg);
int		p4_choose_mode(t_p4 *cfg);
t_bool	p4_check_horizontal(t_p4 *cfg, int line, int col, char player);
t_bool	p4_check_vertical(t_p4 *cfg, int line, int col, char player);
t_bool	p4_check_diagonal(t_p4 *cfg, int line, int col, char player);

#endif /* !PUISSANCE4_H */
