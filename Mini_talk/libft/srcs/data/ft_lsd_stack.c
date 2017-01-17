/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lsd_stack.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drabahi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/09 20:21:04 by drabahi           #+#    #+#             */
/*   Updated: 2014/02/09 20:21:06 by drabahi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_dlist.h"

t_dlist	*ft_lsd_stack(t_dlist *elem, t_dlist *new_elem)
{
	if (!elem && !new_elem)
		return (NULL);
	else if (!elem)
		return (ft_lsd_create(new_elem->data, new_elem->size));
	else if (!new_elem)
		return (elem);
	new_elem = ft_lsd_create(new_elem->data, new_elem->size);
	elem = ft_lsd_getfirst(elem);
	new_elem->prev = ft_lsd_getlast(elem);
	ft_lsd_getlast(elem)->next = new_elem;
	return (new_elem);
}

