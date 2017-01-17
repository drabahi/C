/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drabahi <drabahi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/22 18:26:19 by drabahi           #+#    #+#             */
/*   Updated: 2013/12/01 22:15:40 by drabahi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

void	*ft_memcpy(void *s1, const void *s2, size_t n)
{
	size_t		i;
	char		*tmp;
	const char	*tmp2;

	i = 0;
	tmp = s1;
	tmp2 = s2;
	while (i < n)
	{
		tmp[i] = tmp2[i];
		i++;
	}
	return (tmp);
}
