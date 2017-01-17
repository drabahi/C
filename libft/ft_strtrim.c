/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drabahi <drabahi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/27 23:26:01 by drabahi           #+#    #+#             */
/*   Updated: 2014/04/16 19:01:07 by drabahi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <string.h>

char	*ft_strtrim(char const *s)
{
	size_t	i;
	size_t	j;
	char	*ret;

	i = 0;
	j = ft_strlen(s) - 1;
	while ((s[i] == ' ' || s[i] == '\n' || s[i] == '\t') && i < j)
		i++;
	while ((s[j] == ' ' || s[j] == '\n' || s[j] == '\t') && j != 0)
		j--;
	ret = ft_strsub(s, i, j - i + 1);
	return (ret);
}
