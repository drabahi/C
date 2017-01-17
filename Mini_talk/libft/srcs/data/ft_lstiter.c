/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drabahi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/09 20:25:47 by drabahi           #+#    #+#             */
/*   Updated: 2014/02/09 20:25:48 by drabahi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_lstiter(t_list *lst, void (*f)(t_list *elem))
{
	t_list	*temp;

	if (lst)
	{
		temp = lst;
		while (temp)
		{
			(*f)(temp);
			temp = temp->next;
		}
	}
	(void)lst;
	(void)f;
}

