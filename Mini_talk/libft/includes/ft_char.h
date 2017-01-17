/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_char.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drabahi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/09 19:09:58 by drabahi           #+#    #+#             */
/*   Updated: 2014/02/09 19:10:13 by drabahi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_CHAR_H
# define FT_CHAR_H

/*
** Char functions
*/
int			ft_isprint(int c);
int			ft_isascii(int c);
int			ft_isdigit(int c);
int			ft_isalpha(int c);
int			ft_isalnum(int c);
int			ft_isupper(int c);
int			ft_islower(int c);
int			ft_toupper(int c);
int			ft_tolower(int c);
int			ft_iswhitespace(int c);

#endif /* !FT_CHAR_H */

