/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_remalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drabahi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/09 19:34:51 by drabahi           #+#    #+#             */
/*   Updated: 2014/02/09 19:34:53 by drabahi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_memory.h"

void	*ft_remalloc(void *addr, size_t oldsize, size_t newsize)
{
	void	*newaddr;

	if (!addr || newsize < oldsize)
		return (NULL);
	if ((newaddr = malloc(newsize)) == NULL)
		return (NULL);
	newaddr = ft_memcpy(newaddr, addr, oldsize);
	free(addr);
	return (newaddr);
}

