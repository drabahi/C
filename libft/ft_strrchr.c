/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drabahi <drabahi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/22 18:40:22 by drabahi           #+#    #+#             */
/*   Updated: 2013/12/01 22:27:11 by drabahi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	int		n;
	char	*s1;

	i = 0;
	n = ft_strlen(s);
	s1 = (char *)s;
	while ((i - 1) < n && s1[n] != c)
	{
		if (n == i)
			return (NULL);
		n--;
	}
	return (&s1[n]);
}
