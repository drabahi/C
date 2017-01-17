/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcountc.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drabahi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/09 19:37:15 by drabahi           #+#    #+#             */
/*   Updated: 2014/02/09 19:37:17 by drabahi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strcountc(char const *str, char c)
{
	int		i;
	int		ret;

	i = 0;
	ret = 0;
	while (*(str + i))
	{
		if (*(str + i) == c)
			ret++;
		i++;
	}
	return (ret);
}

