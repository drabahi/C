/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lsd_getfirst.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drabahi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/09 20:17:26 by drabahi           #+#    #+#             */
/*   Updated: 2014/02/09 20:17:27 by drabahi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_dlist.h"

t_dlist	*ft_lsd_getfirst(t_dlist *elem)
{
	t_dlist	*ret;

	if (!elem)
		return (NULL);
	ret = elem;
	while (ret->prev != NULL)
		ret = ret->prev;
	return (ret);
}

