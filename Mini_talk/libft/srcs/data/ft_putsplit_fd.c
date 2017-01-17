/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putsplit_fd.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drabahi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/09 20:26:58 by drabahi           #+#    #+#             */
/*   Updated: 2014/02/09 20:27:02 by drabahi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_output.h"

void	ft_putsplit_fd(char **split, int fd)
{
	int		i;

	i = 0;
	while (split[i])
	{
		ft_putendl_fd(split[i], fd);
		i++;
	}
	if (!i)
		ft_putendl_fd("(null split)", fd);
}

