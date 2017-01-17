/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit_clean.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksever <ksever@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/09 19:15:58 by ksever            #+#    #+#             */
/*   Updated: 2014/01/10 15:37:46 by ksever           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void		ft_strsplit_clean(char ***tabstr)
{
	int			row;
	char		**tab;

	if (!*tabstr)
		return ;
	tab = *tabstr;
	row = 0;
	while (tab[row])
	{
		free(tab[row]);
		row++;
	}
	free(*tabstr);
	*tabstr = NULL;
}
