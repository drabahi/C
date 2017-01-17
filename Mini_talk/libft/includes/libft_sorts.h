/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_sorts.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drabahi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/09 19:16:30 by drabahi           #+#    #+#             */
/*   Updated: 2014/02/09 19:16:34 by drabahi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_SORTS_H
# define LIBFT_SORTS_H

# include "ft_dlist.h"

/*
** Sorts
*/
t_dlist		*ft_lsd_fusion_intsort(t_dlist *unsorted);
t_dlist		*ft_lsd_fusion_strsort(t_dlist *unsorted);

#endif /* LIBFT_SORTS_H */

