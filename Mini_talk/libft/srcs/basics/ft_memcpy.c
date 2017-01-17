/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drabahi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/09 19:34:00 by drabahi           #+#    #+#             */
/*   Updated: 2014/02/09 19:34:02 by drabahi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_memory.h"

void	*ft_memcpy(void *s1, const void *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n && s1 && s2)
	{
		((unsigned char*)s1)[i] = ((unsigned char*)s2)[i];
		i++;
	}
	if (!s1 || !s2)
		return (NULL);
	return (s1);
}

