/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drabahi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/09 19:31:20 by drabahi           #+#    #+#             */
/*   Updated: 2014/02/09 19:31:22 by drabahi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	else
		return (0);
}

