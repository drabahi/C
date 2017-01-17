/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstaddtoend.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drabahi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/09 20:23:12 by drabahi           #+#    #+#             */
/*   Updated: 2014/02/09 20:23:13 by drabahi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_lstaddtoend(t_list **alst, t_list *newelem)
{
	t_list	*tmp;

	tmp = *alst;
	if (alst && newelem)
	{
		while (tmp->next)
			tmp = tmp->next;
		tmp->next = newelem;
	}
}

