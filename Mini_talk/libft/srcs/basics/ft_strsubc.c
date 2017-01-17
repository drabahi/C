/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsubc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drabahi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/09 19:45:58 by drabahi           #+#    #+#             */
/*   Updated: 2014/02/09 19:46:00 by drabahi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"

char	*ft_strsubc(char *str, char oldc, char newc)
{
	int		i;

	if (!str)
		return (NULL);
	i = 0;
	while (str[i])
	{
		if (str[i] == oldc)
			str[i] = newc;
		i++;
	}
	return (str);
}

