/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lsd_insert.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drabahi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/09 20:18:17 by drabahi           #+#    #+#             */
/*   Updated: 2014/02/09 20:18:20 by drabahi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_dlist.h"

t_dlist	*ft_lsd_insert(t_dlist *prev_elem, t_dlist *new_elem)
{
	t_dlist	*next_elem;

	if (!prev_elem && !new_elem)
		return (NULL);
	else if (!prev_elem)
		return (ft_lsd_create(new_elem->data, new_elem->size));
	else if (!new_elem)
		return (prev_elem);
	next_elem = prev_elem->next;
	new_elem->next = next_elem;
	new_elem->prev = prev_elem;
	prev_elem->next = new_elem;
	if (next_elem && next_elem->prev)
		next_elem->prev = new_elem;
	return (new_elem);
}

