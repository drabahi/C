/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lsd_rev.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drabahi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/09 20:20:43 by drabahi           #+#    #+#             */
/*   Updated: 2014/02/09 20:20:48 by drabahi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_dlist.h"

t_dlist		*ft_lsd_rev(t_dlist *original)
{
	t_dlist		*rev;

	original = ft_lsd_getlast(original);
	if (!original)
		return (NULL);
	while (original->prev)
	{
		rev = ft_lsd_stack(rev, original);
		original = original->prev;
	}
	rev = ft_lsd_stack(rev, original);
	ft_lsd_del(original);
	return (ft_lsd_getfirst(rev));
}

