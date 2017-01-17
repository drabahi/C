/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drabahi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/09 20:32:20 by drabahi           #+#    #+#             */
/*   Updated: 2014/02/09 20:32:23 by drabahi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdarg.h>
#include "ft_string.h"
#include "ft_output.h"

int			ft_printf(const char* format, ...)
{
	int			offset;
	int			len;
	va_list		ap;

	len = 0;
	va_start(ap, format);
	while ((offset = ft_findc(format, '%')) != -1)
	{
		format = ft_putnstr(format, offset);
		len += offset;
		if (format[0] == '%' && format[1] == '%')
			len += ft_putchar('%');
		else if (format[0] == '%' && format[1] == 's')
			len += ft_putstr(va_arg(ap, char *));
		else if (format[0] == '%' && (format[1] == 'i' || format[1] == 'd'))
			len += ft_putstr(ft_itoa(va_arg(ap, int)));
		else if (format[0] == '%' && format[1] == 'c')
			len += ft_putchar(va_arg(ap, int));
		else
			return (len);
		format = format + 2;
	}
	len += ft_putstr(format);
	va_end(ap);
	return (len);
}

