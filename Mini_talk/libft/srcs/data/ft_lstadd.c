/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drabahi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/09 20:22:14 by drabahi           #+#    #+#             */
/*   Updated: 2014/02/09 20:22:39 by drabahi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_lstadd(t_list **alst, t_list *newelem)
{
	if (alst && newelem)
	{
		newelem->next = alst[0];
		alst[0] = newelem;
	}
}
