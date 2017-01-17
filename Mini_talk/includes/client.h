/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drabahi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/08 19:08:30 by drabahi           #+#    #+#             */
/*   Updated: 2014/02/08 19:09:06 by drabahi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLIENT_H
# define CLIENT_H

# include <unistd.h>
# include <signal.h>
# include "common.h"

int     ft_kill(pid_t pid, char bitsend);
void    ft_sigsend_char(pid_t pid, char c);

void    ft_sigsend(pid_t pid, char *str);
void    ft_signal_callback(int signum, siginfo_t *siginfo, void *context);
void    ft_sigaction_init(void);
void    ft_sigaction_ignore(void);

#endif /* !CLIENT_H */
