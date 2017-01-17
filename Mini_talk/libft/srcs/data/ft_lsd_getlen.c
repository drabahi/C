/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lsd_getlen.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drabahi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/09 20:17:58 by drabahi           #+#    #+#             */
/*   Updated: 2014/02/09 20:17:59 by drabahi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_dlist.h"

int		ft_lsd_getlen(t_dlist *elem)
{
	int		i;
	t_dlist	*tmp;

	i = 0;
	tmp = ft_lsd_getfirst(elem);
	while (tmp)
	{
		tmp = tmp->next;
		i++;
	}
	return (i);
}

