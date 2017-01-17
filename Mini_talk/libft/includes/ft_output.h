/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_output.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drabahi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/09 19:11:58 by drabahi           #+#    #+#             */
/*   Updated: 2014/02/09 19:12:01 by drabahi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_OUTPUT_H
# define FT_OUTPUT_H

# include <string.h>

/*
** stdout write functions
*/
int			ft_putchar(char c);
int			ft_putstr(char const *s);
void		ft_putendl(char const *s);
void		ft_putnbr(int num);
char		*ft_putnstr(const char *str, size_t n);

/*
** file descriptors write functions
*/
void		ft_putchar_fd(char c, int fd);
void		ft_putstr_fd(char const *s, int fd);
void		ft_putendl_fd(char const *s, int fd);
void		ft_putnbr_fd(int num, int fd);

/*
** Formating
*/
int			ft_printf(const char *format, ...)
			__attribute__((format(printf, 1, 2)));

#endif /* !FT_OUTPUT_H */

