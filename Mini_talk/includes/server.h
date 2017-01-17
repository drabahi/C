/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drabahi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/08 19:17:39 by drabahi           #+#    #+#             */
/*   Updated: 2014/02/08 19:33:30 by drabahi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERVER_H
# define SERVER_H

# define SINGLETON_SET 0
# define SINGLETON_GET 1

# define BUF_SIZE 32

# include <stdlib.h>
# include <unistd.h>
# include <signal.h>
# include "common.h"

typedef struct		s_flux
{
	char	*buffer;
	size_t	buffer_size;
	char	c;
	int		ctr;
	int		index;
	pid_t	server;
}					t_flux;

void	ft_sigaction_init(void);
void	ft_sigaction_ignore(void);
void	ft_sigusr1_callback(int signum, siginfo_t *siginfo, void *context);
void	ft_sigusr2_callback(int signum, siginfo_t *siginfo, void *context);

void	ft_init_flux(t_flux *flux);
t_flux	*ft_singleton_flux(char flag, t_flux *newflux);
int		ft_pow(int value, int exp);
void	ft_refresh_buffer(t_flux *flux);
void	ft_refresh_flux(char bitstate, t_flux *flux);

#endif /* !SERVER_H */
