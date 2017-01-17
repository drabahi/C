/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drabahi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/09 19:41:17 by drabahi           #+#    #+#             */
/*   Updated: 2014/02/09 19:41:19 by drabahi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	int		i;
	char	*ret;

	if ((ret = ft_memalloc(ft_strlen((char*)s))))
	{
		i = 0;
		while (s[i] != '\0')
		{
			ret[i] = (*f)(s[i]);
			i++;
		}
		return (ret);
	}
	return (NULL);
}

