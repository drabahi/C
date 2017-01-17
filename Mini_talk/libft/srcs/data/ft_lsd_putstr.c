/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lsd_putstr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drabahi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/09 20:20:00 by drabahi           #+#    #+#             */
/*   Updated: 2014/02/09 20:20:01 by drabahi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_dlist.h"
#include "ft_output.h"

int		ft_lsd_putstr(t_dlist *elem)
{
	t_dlist	*tmp;

	if (!elem)
	{
		ft_putstr("[NULL]\n");
		return (0);
	}
	tmp = elem;
	ft_putstr((char *)tmp->data);
	while (tmp->next)
	{
		ft_putstr(" <--> ");
		tmp = tmp->next;
		ft_putstr((char *)tmp->data);
	}
	ft_putchar('\n');
	return (1);
}

