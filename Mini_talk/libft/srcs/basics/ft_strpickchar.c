/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strpickchar.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drabahi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/09 19:44:30 by drabahi           #+#    #+#             */
/*   Updated: 2014/02/09 19:44:31 by drabahi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	ft_strpickchar(char *str, int index)
{
	int		i;
	char	picked_char;

	if (index >= (int)ft_strlen(str) || index < 0)
		return (0);
	picked_char = str[index];
	i = index + 1;
	while (str[i] != '\0')
	{
		str[i - 1] = str[i];
		i++;
	}
	str[i - 1] = '\0';
	return (picked_char);
}

