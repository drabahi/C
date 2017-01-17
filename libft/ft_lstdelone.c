/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drabahi <drabahi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/03 23:18:43 by drabahi           #+#    #+#             */
/*   Updated: 2014/04/16 14:10:10 by drabahi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <string.h>

void	ft_lstdelone(t_list **alst, void (*del)(void *, size_t))
{
	t_list *list;

	if (!alst || !*alst)
		return ;
	list = *alst;
	*alst = list->next;
	(*del)(list->content, list->content_size);
	free(list);
}
