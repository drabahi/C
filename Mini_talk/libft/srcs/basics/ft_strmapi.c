/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drabahi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/09 19:41:31 by drabahi           #+#    #+#             */
/*   Updated: 2014/02/09 19:41:33 by drabahi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	char	*ret;

	if ((ret = ft_memalloc(ft_strlen((char*)s))))
	{
		i = 0;
		while (s[i] != '\0')
		{
			ret[i] = (*f)(i, s[i]);
			i++;
		}
		return (ret);
	}
	return (NULL);
}

