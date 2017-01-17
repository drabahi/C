/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drabahi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/09 20:24:52 by drabahi           #+#    #+#             */
/*   Updated: 2014/02/09 20:24:53 by drabahi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*temp;

	if (alst)
	{
		temp = *alst;
		while (temp)
		{
			temp = alst[0]->next;
			ft_lstdelone(alst, del);
			alst[0] = temp;
		}
	}
}

