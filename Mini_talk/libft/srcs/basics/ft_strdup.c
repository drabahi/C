/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drabahi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/09 19:39:11 by drabahi           #+#    #+#             */
/*   Updated: 2014/02/09 19:39:13 by drabahi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strdup(const char *src)
{
	int		length;
	int		i;
	char	*dest;

	i = 0;
	if (!src)
		return (NULL);
	while (src[i] != '\0')
		i++;
	length = i + 1;
	i = 0;
	if ((dest = (char*)malloc(length)))
	{
		while (i <= length)
		{
			dest[i] = src[i];
			i++;
		}
		return (dest);
	}
	else
		return (NULL);
}

