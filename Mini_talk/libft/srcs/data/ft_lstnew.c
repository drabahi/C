/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drabahi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/09 20:26:11 by drabahi           #+#    #+#             */
/*   Updated: 2014/02/09 20:26:13 by drabahi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include "ft_memory.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*newlist;

	if (!content)
		content_size = 0;
	if (!(newlist = ft_memalloc(sizeof(t_list))))
		return (NULL);
	if (content_size)
		newlist->content = (void *)content;
	else
		newlist->content = NULL;
	newlist->content_size = content_size;
	newlist->next = NULL;
	return (newlist);
}

