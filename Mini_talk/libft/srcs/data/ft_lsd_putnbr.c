/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lsd_putnbr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drabahi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/09 20:19:45 by drabahi           #+#    #+#             */
/*   Updated: 2014/02/09 20:19:50 by drabahi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_dlist.h"
#include "ft_output.h"

int		ft_lsd_putnbr(t_dlist *elem)
{
	t_dlist	*tmp;
	int		*n;

	if (!elem)
	{
		ft_putstr("[NULL]\n");
		return (0);
	}
	tmp = elem;
	n = tmp->data;
	ft_putnbr(*n);
	while (tmp->next)
	{
		ft_putstr(" <--> ");
		tmp = tmp->next;
		n = tmp->data;
		ft_putnbr(*n);
	}
	ft_putchar('\n');
	return (1);
}

