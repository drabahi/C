/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lststrrev.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drabahi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/09 20:26:23 by drabahi           #+#    #+#             */
/*   Updated: 2014/02/09 20:26:25 by drabahi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include "ft_string.h"

t_list	*ft_lststrrev(t_list *elem)
{
	if (elem)
	{
		elem->content = ft_strrev(elem->content);
		return (elem);
	}
	return (NULL);
}

