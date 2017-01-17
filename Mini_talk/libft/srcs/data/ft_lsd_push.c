/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lsd_push.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drabahi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/09 20:19:22 by drabahi           #+#    #+#             */
/*   Updated: 2014/02/09 20:19:24 by drabahi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_dlist.h"

t_dlist	*ft_lsd_push(t_dlist *elem, t_dlist *new_elem)
{
	t_dlist	*first;

	first = ft_lsd_getfirst(elem);
	if (!elem && !new_elem)
		return (NULL);
	else if (!elem)
		return (ft_lsd_create(new_elem->data, new_elem->size));
	else if (!new_elem)
		return (elem);
	new_elem = ft_lsd_create(new_elem->data, new_elem->size);
	new_elem->next = first;
	first->prev = new_elem;
	return (new_elem);
}

