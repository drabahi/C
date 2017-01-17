/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drabahi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/09 19:13:57 by drabahi           #+#    #+#             */
/*   Updated: 2014/02/09 19:17:38 by drabahi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# define BUFF_SIZE 128

typedef struct	s_gnl
{
	int			fd;
	char		*membuf;
}				t_gnl;

int		get_next_line(int const fd, char **line);

#endif /* !GET_NEXT_LINE_H */

