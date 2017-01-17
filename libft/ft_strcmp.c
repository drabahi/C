/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drabahi <drabahi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/19 12:10:58 by drabahi           #+#    #+#             */
/*   Updated: 2014/04/16 18:26:02 by drabahi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strcmp(const char *s1, const char *s2)
{
	while (*s1)
	{
		if (*s2 == '\0')
			return (1);
		if (*(unsigned char *)s2 > *(unsigned char *)s1)
			return (*(unsigned char *)s2 > *(unsigned char *)s1);
		if (*(unsigned char *)s1 > *(unsigned char *)s2)
			return (*(unsigned char *)s1 > *(unsigned char *)s2);
		s1++;
		s2++;
	}
	if (*s2)
		return (-1);
	return (0);
}
