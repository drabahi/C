/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drabahi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/09 19:37:41 by drabahi           #+#    #+#             */
/*   Updated: 2014/02/09 19:37:43 by drabahi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcpy(char *s1, const char *s2)
{
	int		i;
	char	*ret;

	ret = s1;
	i = 0;
	if (!s1 || !s2)
		return (NULL);
	while (s2[i] != '\0')
	{
		ret[i] = s2[i];
		i++;
	}
	ret[i] = '\0';
	return (ret);
}
