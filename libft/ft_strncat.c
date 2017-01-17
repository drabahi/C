/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drabahi <drabahi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/21 15:17:54 by drabahi           #+#    #+#             */
/*   Updated: 2014/04/14 20:09:34 by drabahi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	size_t	i;
	int		len;

	i = 0;
	len = 0;
	while (s1[len] != '\0')
		len++;
	while (s2[i] != '\0' && n > 0)
	{
		s1[len + i] = s2[i];
		i++;
		n--;
	}
	s1[len + i] = '\0';
	return (s1);
}
