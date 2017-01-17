/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lsd_delone.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drabahi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/09 20:16:54 by drabahi           #+#    #+#             */
/*   Updated: 2014/02/09 20:16:55 by drabahi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_dlist.h"
#include "ft_memory.h"

void	ft_lsd_delone(t_dlist *elem)
{
	int		solo;

	solo = 0;
	if (elem->prev == NULL && elem->next == NULL)
		solo = 1;
	if (!solo && !elem->prev)
	{
		elem->next->prev = NULL;
		elem->next = NULL;
	}
	else if (!solo && !elem->next)
	{
		elem->prev->next = NULL;
		elem->prev = NULL;
	}
	else if (!solo)
	{
		elem->prev->next = elem->next;
		elem->next->prev = elem->prev;
		elem->next = NULL;
		elem->prev = NULL;
	}
	ft_memdel(&(elem->data));
	ft_memdel((void *)elem);
}

