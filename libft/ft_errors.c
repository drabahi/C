/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_errors.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drabahi <drabahi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/04/16 20:38:11 by drabahi           #+#    #+#             */
/*   Updated: 2014/04/16 20:39:38 by drabahi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strerror(int error)
{
	extern const char		*sys_errlist[];

	if (error >= 0 && error <= 106)
		return ((char *)sys_errlist[error]);
	else
		return ((char *)sys_errlist[0]);
}

void		ft_perror(char *prefix)
{
	extern int				errno;
	extern const char		*sys_errlist[];

	if (prefix)
	{
		ft_putstr_fd(prefix, 2);
		ft_putstr_fd(": ", 2);
	}
	ft_putendl_fd(sys_errlist[errno], 2);
	return ;
}

int			ft_error(char *appname, char *msg, int use_errno, int retval)
{
	if (appname)
	{
		ft_putstr_fd(appname, 2);
		ft_putstr_fd(": ", 2);
	}
	if (use_errno)
		ft_perror(msg);
	else
	{
		ft_putendl_fd(msg, 2);
	}
	return (retval);
}
