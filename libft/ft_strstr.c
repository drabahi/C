/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drabahi <drabahi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/22 18:43:25 by drabahi           #+#    #+#             */
/*   Updated: 2014/04/14 20:16:09 by drabahi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *s1, const char *s2)
{
	int			i;
	int			cpt;
	const char	*tmp;

	i = 0;
	cpt = 0;
	tmp = (char *)s1;
	if (s2[i] == '\0')
		return ((char *)s1);
	while (s1[i])
	{
		if (s1[i] == s2[cpt])
			cpt++;
		else
		{
			cpt = 0;
		}
		if (!s2[cpt])
		{
			i = i - (cpt - 1);
			return ((char *)tmp + i);
		}
		i++;
	}
	return (NULL);
}
