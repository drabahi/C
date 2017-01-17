/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   old.ft_strsplit.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drabahi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/09 20:31:13 by drabahi           #+#    #+#             */
/*   Updated: 2014/02/09 20:31:16 by drabahi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_standard_helpers.h"
#include "ft_string.h"
#include "ft_memory.h"

static char	*ft_simplify(char const *s, char c)
{
	char	*trimmedstring;
	char	*ret;

	trimmedstring = ft_strtrimc(s, c);
	ret = ft_strdelmultic(trimmedstring, c);
	ft_strdel(&trimmedstring);
	return (ret);
}

char		**ft_strsplit(char const *s, char c)
{
	char	*properstring;
	int		len;
	int		j;
	char	**ret;

	if (!s)
		return (NULL);
	properstring = ft_simplify(s, c);
	if (!(ret = (char**)malloc(PTRSIZE * (ft_strcountc(properstring, c) + 2))))
		return (NULL);
	j = 0;
	while (*properstring)
	{
		len = 0;
		while (properstring[len] != c && properstring[len] != '\0')
			len++;
		if (!(ret[j] = ft_strnew(len + 1)))
			return (NULL);
		ret[j] = ft_strncpy(ret[j], properstring, len);
		j++;
		properstring = properstring + len + 1;
	}
	ret[j] = ft_strnew(1);
	ret[j] = '\0';
	return (ret);
}

