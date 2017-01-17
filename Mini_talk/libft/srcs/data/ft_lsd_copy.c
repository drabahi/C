/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lsd_copy.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drabahi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/09 20:15:49 by drabahi           #+#    #+#             */
/*   Updated: 2014/02/09 20:16:03 by drabahi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_standard_helpers.h"
#include "ft_dlist.h"

t_dlist		*ft_lsd_copy(t_dlist *l)
{
	t_dlist		*newl;
	t_dlist		*tmp;

	tmp = l;
	while (tmp)
	{
		newl = LSD_STACK(newl, LSD_CREATE(tmp->data, tmp->size));
		tmp = tmp->next;
	}
	return (ft_lsd_getfirst(newl));
}

