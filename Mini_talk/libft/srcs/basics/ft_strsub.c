/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drabahi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/09 19:45:47 by drabahi           #+#    #+#             */
/*   Updated: 2014/02/09 19:45:49 by drabahi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*ret;

	while (start > 0)
	{
		s++;
		start--;
	}
	if ((ret = (char*)malloc(len + 1)))
	{
		ret = ft_strncpy(ret, s, len);
		ret[len] = '\0';
	}
	return (ret);
}

