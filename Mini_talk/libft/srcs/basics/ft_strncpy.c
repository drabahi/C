/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drabahi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/09 19:42:16 by drabahi           #+#    #+#             */
/*   Updated: 2014/02/09 19:42:17 by drabahi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

char	*ft_strncpy(char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (!s1 || !s2)
		return (s1);
	ft_bzero(s1, n);
	while (i < n && (s1[i] != '\0' || s2[i] != '\0'))
	{
		s1[i] = s2[i];
		i++;
	}
	return (s1);
}

