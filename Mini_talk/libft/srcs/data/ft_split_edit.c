/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_edit.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drabahi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/09 20:29:42 by drabahi           #+#    #+#             */
/*   Updated: 2014/02/09 20:29:43 by drabahi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_split.h"

char	**ft_split_edit(char **split, char *str, int index)
{
	if (index < ft_split_len(split))
		split[index] = str;
	return (split);
}

