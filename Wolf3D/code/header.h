/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drabahi <drabahi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/07 16:25:38 by drabahi           #+#    #+#             */
/*   Updated: 2014/01/18 22:46:04 by drabahi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
# define HEADER_H
# define BUFF_SIZE 10
# define WW 1280
# define WH 800
# define BIAS 0.03
# define WALK 0.1
# include <mlx.h>
# include <fcntl.h>
# include <math.h>
# include "libft/libft.h"

typedef struct		s_save
{
	int				fd;
	char			*save;
	struct s_save	*next;
}					t_save;

typedef struct		s_coord
{
	double	x;
	double	y;
}					t_coord;

typedef struct		s_env
{
	void	*mlx;
	void	*win;
	void	*img;
	char	*data;
	int		bpp;
	int		n_line;
	int		endian;
	t_coord	*size_map;
	char	***map;
	t_coord	*pos;
	t_coord	*dir;
	t_coord	*plane;
//	double	h;
}					t_env;

typedef struct		s_cal
{
	int		side;
	t_coord	ray_dir;
	t_coord	deltaDist;
	t_coord	sideDist;
	t_coord	step;		/* int */
	t_coord	posi;		/* int */
}					t_cal;

typedef struct		s_move
{
	double	oldDirX;
	double	oldPlaneX;
	double	x;
	double	y;
}					t_move;

/*
**		main.c
*/

int		key_hook(int keycode, t_env *e);
int		expose_hook(t_env *e);
void	minilibx(t_env e);
int		main(int argc, char **argv);
t_env	main2(t_env *e, char *file);


/*
**		depart.c
*/

void	posi_init(t_env *e, char *file);
int		line_map(char *file);
int		col_map(char **map);
void	cons_map(char ****map, int col);
void	free_line_map(char ***line);

/*
**		initial.c
*/

void	coord_init(t_env *e);
t_coord	*mall_pos();
t_coord	*mall_dir();
t_coord	*mall_plane();
void	free_all(t_env *e);

/*
**		view.c
*/

void	pos_eye(t_env *e);
int		wall(const char *coord);
int		loop_hook(t_env *e);

/*
**		move.c
*/

void	left_key(t_env *e);
void	right_key(t_env *e);
void	up_key(t_env *e);
void	down_key(t_env *e);
void	run_key(t_env *e);

/*
**		error.c
*/

int		no_map();
int		no_rec();
int		all_many_ar();

/*
**		tracer.c
*/

void	draw_rec(t_env *e, t_coord *pos_start, t_coord *pos_end, int color);
void	draw_window(t_env *e);
void	draw_line_x(t_env *e, float x);

/*
**		color.c
*/

int		color_line_x(t_env *e, float x, t_coord *pos_start, t_coord *pos_end);
float	find_dist_perp(t_env *e, float x, int *color);
int		find_side(t_env *e, t_cal *info);
void	ft_choose_color(t_coord *p, t_coord *w, int *color, int side);
void	find_start(t_env *e);

/*
**		pos.c
*/

void	pos_info(t_env *e, t_cal *inf, float cam);
void	pos_init(t_coord *position, t_coord *pos);
void	i_ray_dir(t_coord *position, t_env *e, float cam);
void	i_dist_delta(t_coord *delta, t_coord *ray_dir);


/*
**		autre
*/

int		get_next_line(int const fd, char **line);

int		*look(t_env *env);
void	coord(t_coord *co);


#endif /* !HEADER_H */
