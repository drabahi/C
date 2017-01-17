/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lsd_strcount.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drabahi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/09 20:21:21 by drabahi           #+#    #+#             */
/*   Updated: 2014/02/09 20:21:25 by drabahi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_dlist.h"
#include "ft_string.h"

int		ft_lsd_strcount(t_dlist *list, char *str)
{
	int			count;
	t_dlist		*tmp;

	tmp = list;
	count = 0;
	while (tmp)
	{
		if (ft_strcmp(str, tmp->data) == 0)
			count++;
		tmp = tmp->next;
	}
	return (count);
}

