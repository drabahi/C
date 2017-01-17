/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lsd_del.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drabahi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/09 20:16:42 by drabahi           #+#    #+#             */
/*   Updated: 2014/02/09 20:16:44 by drabahi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_dlist.h"

void	ft_lsd_del(t_dlist *elem)
{
	elem = ft_lsd_getfirst(elem);
	while (elem->next)
	{
		elem = elem->next;
		ft_lsd_delone(elem->prev);
	}
	ft_lsd_delone(elem);
}

