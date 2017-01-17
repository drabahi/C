/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksever <ksever@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 15:38:49 by ksever            #+#    #+#             */
/*   Updated: 2013/12/06 15:52:34 by ksever           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *s1, const char *s2, size_t n)
{
	char	*save;

	save = s1;
	while (n > 0 && *s2 != '\0')
	{
		*s1++ = *s2++;
		--n;
	}
	while (n > 0)
	{
		*s1++ = '\0';
		--n;
	}
	return (save);
}
