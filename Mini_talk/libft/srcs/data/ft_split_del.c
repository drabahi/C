/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_del.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drabahi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/09 20:29:25 by drabahi           #+#    #+#             */
/*   Updated: 2014/02/09 20:29:26 by drabahi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_split.h"
#include "ft_memory.h"

void	ft_split_del(char ***split, int index)
{
	char	**split2;

	if (!split && !*split && index < ft_split_len(*split))
		return ;
	split2 = *split + index;
	split2[0] = NULL;
	split2++;
	*split = ft_split_join(*split, split2);
	split2 = split2 - index - 1;
	ft_memdel((void **)split2);
}

