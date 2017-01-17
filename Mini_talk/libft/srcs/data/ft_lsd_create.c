/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lsd_create.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drabahi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/09 20:16:20 by drabahi           #+#    #+#             */
/*   Updated: 2014/02/09 20:16:21 by drabahi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_dlist.h"
#include "ft_memory.h"

t_dlist	*ft_lsd_create(void *data, size_t size)
{
	t_dlist	*elem;

	if (!data)
		size = 0;
	if (!(elem = (t_dlist *)ft_memalloc(sizeof(t_dlist))))
		return (NULL);
	if (size)
	{
		if (!(elem->data = (t_dlist *)ft_memalloc(size)))
			return (NULL);
		elem->data = ft_memcpy(elem->data, data, size);
	}
	else
		elem->data = NULL;
	elem->size = size;
	elem->next = NULL;
	elem->prev = NULL;
	return (elem);
}

