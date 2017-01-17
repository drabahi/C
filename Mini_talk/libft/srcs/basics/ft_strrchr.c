/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drabahi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/09 19:44:53 by drabahi           #+#    #+#             */
/*   Updated: 2014/02/09 19:44:57 by drabahi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;

	if (!s)
		return (NULL);
	i = ft_strlen((char*)s);
	while (i > 0 && s[i] != (char)c)
		i--;
	if (s[i] == c)
		return ((char*)(s + i));
	else
		return (NULL);
}

