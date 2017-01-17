/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drabahi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/08 19:25:28 by drabahi           #+#    #+#             */
/*   Updated: 2014/02/09 17:32:33 by drabahi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "server.h"

void	ft_sigaction_init(void)
{
	struct sigaction	act;

	ft_bzero(&act, sizeof(act));
	act.sa_sigaction = &ft_sigusr1_callback;
	act.sa_flags = SA_SIGINFO;
	sigaction(SIGUSR1, &act, NULL);
	ft_bzero(&act, sizeof(act));
	act.sa_sigaction = &ft_sigusr2_callback;
	act.sa_flags = SA_SIGINFO;
	sigaction(SIGUSR2, &act, NULL);
}

void	ft_sigaction_ignore(void)
{
	struct sigaction	act;

	ft_bzero(&act, sizeof(act));
	act.sa_handler = SIG_IGN;
	sigaction(SIGUSR1, &act, NULL);
	sigaction(SIGUSR2, &act, NULL);
}

void	ft_sigusr1_callback(int signum, siginfo_t *siginfo, void *context)
{
	t_flux	*flux;

	if (siginfo->si_pid == 0)
		return ;
	flux = ft_singleton_flux(SINGLETON_GET, NULL);
	if (signum == FT_SIGZERO && siginfo->si_pid != 0)
	{
		ft_refresh_flux(0, flux);
		usleep(1);
		kill((pid_t)siginfo->si_pid, SIGUSR2);
	}
	(void)context;
}

void    ft_sigusr2_callback(int signum, siginfo_t *siginfo, void *context)
{
	t_flux  *flux;

	if (siginfo->si_pid == 0)
		return ;
	flux = ft_singleton_flux(SINGLETON_GET, NULL);
	if (signum == FT_SIGONE && siginfo->si_pid != 0)
	{
		ft_refresh_flux(1, flux);
		usleep(1);
		kill((pid_t)siginfo->si_pid, SIGUSR2);
	}
	(void)context;
}

int     main(void)
{
	t_flux  *flux;

	flux = (t_flux *)malloc(sizeof(t_flux));
	flux->server = getpid();
	ft_sigaction_init();
	ft_printf("SERVER PID => %d\n", flux->server);
	while (42)
	{
		ft_init_flux(flux);
		while (42)
		{
			pause();
			if (flux->index != 0 && flux->buffer[flux->index - 1] == 0)
				break ;
		}
		ft_putendl(flux->buffer);
		free(flux->buffer);
		flux->buffer = NULL;
	}
	free(flux);
	return (0);
}
