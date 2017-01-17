/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lsd_getlast.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drabahi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/09 20:17:40 by drabahi           #+#    #+#             */
/*   Updated: 2014/02/09 20:17:41 by drabahi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_dlist.h"

t_dlist	*ft_lsd_getlast(t_dlist *elem)
{
	t_dlist	*ret;

	if (!elem)
		return (NULL);
	ret = elem;
	while (ret->next)
		ret = ret->next;
	return (ret);
}

