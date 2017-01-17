/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drabahi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/09 19:11:05 by drabahi           #+#    #+#             */
/*   Updated: 2014/02/09 19:11:07 by drabahi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LIST_H
# define FT_LIST_H

# include <string.h>

typedef struct		s_list
{
	void			*content;
	size_t			content_size;
	struct s_list	*next;
}					t_list;

/*
** Linked lists (to redo)
*/
t_list		*ft_lstnew(void const *content, size_t content_size);
void		ft_lstdelone(t_list **alst, void (*del)(void *, size_t));
void		ft_lstdel(t_list **alst, void (*del)(void *, size_t));
void		ft_lstadd(t_list **alst, t_list *newelem);
void		ft_lstiter(t_list *lst, void (*f)(t_list *elem));
t_list		*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem));

/*
** Additional linked lists Functions
*/
void		ft_lstdelstr(void *content, size_t content_size);
void		ft_lstdonothing(void *ptr, size_t content_size);
void		ft_lstbzero(t_list *elem);
t_list		*ft_lststrrev(t_list *elem);
void		ft_lstaddtoend(t_list **alst, t_list *newelem);

#endif /* !FT_LIST_H */

