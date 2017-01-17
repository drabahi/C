/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksever <ksever@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/23 21:49:20 by ksever            #+#    #+#             */
/*   Updated: 2014/01/17 19:44:47 by ksever           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
	char	*newstr;
	char	*save;
	int		i;

	if (!s)
		return (NULL);
	newstr = ft_strdup(s);
	if (!newstr)
		return (NULL);
	i = 0;
	save = newstr;
	while (*newstr)
	{
		*newstr = f(i++, *newstr);
		newstr++;
	}
	newstr = '\0';
	return (save);
}

