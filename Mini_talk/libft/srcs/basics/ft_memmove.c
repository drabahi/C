/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drabahi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/09 19:34:25 by drabahi           #+#    #+#             */
/*   Updated: 2014/02/09 19:34:27 by drabahi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_memory.h"

void	*ft_memmove(void *s1, const void *s2, size_t n)
{
	void	*buf;

	if ((buf = (void*)malloc(n)))
	{
		ft_memcpy(buf, s2, n);
		ft_memcpy(s1, buf, n);
		free(buf);
	}
	return (s1);
}

