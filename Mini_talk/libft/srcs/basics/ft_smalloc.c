/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_smalloc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drabahi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/09 19:35:32 by drabahi           #+#    #+#             */
/*   Updated: 2014/02/09 19:35:33 by drabahi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_memory.h"

void	*ft_smalloc(size_t size)
{
	void	*mem;

	if (ft_smem(MALLOC, &mem, size) == -1)
		return (NULL);
	else
		return (mem);
}

