/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server2.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drabahi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/08 19:30:06 by drabahi           #+#    #+#             */
/*   Updated: 2014/02/09 17:33:07 by drabahi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "server.h"

void	ft_init_flux(t_flux *flux)
{
	flux->buffer = (char *)malloc(BUF_SIZE);
	flux->buffer_size = BUF_SIZE;
	flux->ctr = 0;
	flux->c = 0;
	flux->index = 0;
	flux = ft_singleton_flux(SINGLETON_SET, flux);
}

t_flux	*ft_singleton_flux(char flag, t_flux *newflux)
{
	static t_flux	*flux = NULL;

	if (flag == SINGLETON_SET)
		flux = newflux;
	return (flux);
}

int		ft_pow(int value, int exp)
{
	int		retvalue;

	retvalue = 1;
	while (exp > 0)
	{
		retvalue *= value;
		exp--;
	}
	return (retvalue);
}

void	ft_refresh_buffer(t_flux *flux)
{
	size_t	newlen;

	flux->ctr = 0;
	flux->buffer[flux->index] = flux->c;
	flux->c = 0;
	flux->index++;
	if ((flux->index + 1) == (int)flux->buffer_size)
	{
		newlen = flux->buffer_size + BUF_SIZE;
		flux->buffer = ft_remalloc(flux->buffer, flux->buffer_size, newlen);
	}
}

void	ft_refresh_flux(char bitstate, t_flux *flux)
{
	if (bitstate == 1)
		flux->c = flux->c + ft_pow(2, flux->ctr);
	flux->ctr++;
	if (flux->ctr == 8)
		ft_refresh_buffer(flux);
}
