/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksever <ksever@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/23 21:31:15 by ksever            #+#    #+#             */
/*   Updated: 2014/01/17 19:44:45 by ksever           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(const char *s, char (*f)(char))
{
	char	*newstr;
	char	*save;

	if (!s)
		return (NULL);
	newstr = ft_strdup(s);
	if (!newstr)
		return (NULL);
	save = newstr;
	while (*newstr)
	{
		*newstr = f(*newstr);
		newstr++;
	}
	newstr = '\0';
	return (save);
}

