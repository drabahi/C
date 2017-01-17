/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drabahi <drabahi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/21 14:08:22 by drabahi           #+#    #+#             */
/*   Updated: 2014/04/14 19:57:25 by drabahi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *s1, const char *s2)
{
	int				i;
	unsigned int	len;

	i = 0;
	len = 0;
	while (s1[i] != '\0')
	{
		len++;
		i++;
	}
	i = 0;
	while (s2[i] != '\0')
	{
		s1[len + i] = s2 [i];
		i++;
	}
	s1[len + i] = '\0';
	return (s1);
}