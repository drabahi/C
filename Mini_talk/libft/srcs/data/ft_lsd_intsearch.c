/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lsd_intsearch.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drabahi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/09 20:18:45 by drabahi           #+#    #+#             */
/*   Updated: 2014/02/09 20:18:46 by drabahi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_dlist.h"

int		ft_lsd_intsearch(t_dlist *list, int i)
{
	int		cntr;
	t_dlist	*tmp;

	cntr = 1;
	tmp = list;
	while (tmp)
	{
		if (*(int *)(tmp->data) == i)
			return (cntr);
		cntr++;
		tmp = tmp->next;
	}
	return (0);
}

