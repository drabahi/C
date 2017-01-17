/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drabahi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/08 19:34:41 by drabahi           #+#    #+#             */
/*   Updated: 2014/02/08 20:13:49 by drabahi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "client.h"

void	ft_sigsend(pid_t pid, char *str)
{
	int		i;

	i = 0;
	while (str[i])
	{
		ft_sigsend_char(pid, str[i]);
		i++;
	}
	ft_sigsend_char(pid, '\0');
}

void	ft_signal_callback(int signum, siginfo_t *siginfo, void *context)
{
	if (siginfo->si_pid == 0)
		return ;
	usleep(42);
	(void)context;
	(void)signum;
}

void	ft_sigaction_init(void)
{
	struct sigaction	act;

	ft_bzero(&act, sizeof(act));
	act.sa_sigaction = &ft_signal_callback;
	act.sa_flags = SA_SIGINFO;
	sigaction(SIGUSR1, &act, NULL);
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

int		main(int argc, char **argv)
{
	pid_t	pid;

	ft_sigaction_init();
	if (argc == 3)
	{
		pid = (int)ft_atoi(argv[1]);
		ft_sigsend(pid, argv[2]);
	}
	else
	{
/*		ft_putendl("usage: ./client [pid_server] [string]");*/
		ft_putstr("usage: ./client [pid_server] [string]");
		write(1, "\n", 1);
	}
	return (0);
}
