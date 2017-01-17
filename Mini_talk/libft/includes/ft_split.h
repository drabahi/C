/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drabahi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/09 19:12:15 by drabahi           #+#    #+#             */
/*   Updated: 2014/02/09 19:12:18 by drabahi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_SPLIT_H
# define FT_SPLIT_H

/*
** Split functions
*/
char		**ft_strsplit(char const *s, char c);
char		**ft_split_create(char *str);
int			ft_split_len(char **split);
char		**ft_split_edit(char **split, char *str, int index);

void		ft_split_del(char ***split, int index);
char		**ft_split_cpy(char **split);
char		**ft_split_add(char **split, char *str);
char		**ft_split_join(char **split1, char **split2);
char		*ft_split_merge(char **split, char *delimiter);

void		ft_putsplit(char **split);
void		ft_putsplit_fd(char **split, int fd);

#endif /* !FT_SPLIT_H */

