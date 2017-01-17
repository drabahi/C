/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drabahi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/09 20:25:59 by drabahi           #+#    #+#             */
/*   Updated: 2014/02/09 20:26:00 by drabahi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list			*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*i;
	t_list	*ret;

	if (lst)
	{
		i = lst;
		ret = ft_lstnew((void const *)1, 4);
		while (i)
		{
			ft_lstaddtoend(&ret, (*f)(ft_lstnew(i->content, i->content_size)));
			i = i->next;
		}
		i = ret;
		ret = ret->next;
		ft_lstdelone(&i, ft_lstdonothing);
		return (ret);
	}
	else
		return (NULL);
}

