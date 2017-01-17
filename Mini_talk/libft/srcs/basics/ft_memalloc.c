/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drabahi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/09 19:32:39 by drabahi           #+#    #+#             */
/*   Updated: 2014/02/09 19:32:41 by drabahi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_memory.h"

void	*ft_memalloc(size_t size)
{
	void	*zone;

	zone = malloc(size);
	if (zone != NULL)
	{
		ft_bzero(zone, size);
		return (zone);
	}
	return (NULL);
}

