/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drabahi <drabahi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/27 23:16:21 by drabahi           #+#    #+#             */
/*   Updated: 2013/12/01 22:25:11 by drabahi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*d;
	unsigned int	i;

	if (f == NULL || s == NULL)
		return (NULL);
	d = (char *)malloc(sizeof(*d) * (ft_strlen(s) + 1));
	i = 0;
	while (s[i])
	{
		d[i] = f(i, s[i]);
		i++;
	}
	return (d);
}
