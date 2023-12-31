/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saait-si <saait-si@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/30 04:28:39 by saait-si          #+#    #+#             */
/*   Updated: 2023/12/31 21:15:25 by saait-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_type(char specifier, va_list arg, int *len)
{
	if (specifier == 'c')
		*len += ft_putchar(va_arg(arg, int));
	else if ((specifier == 'd' || specifier == 'i'))
		*len += ft_putnbr(va_arg(arg, int));
	else if (specifier == 's')
		*len += ft_putstr(va_arg(arg, char *));
	else if (specifier == 'p')
	{
		*len += ft_putstr("0x");
		*len += ft_putadress(va_arg(arg, unsigned long));
	}
	else if (specifier == 'u')
		*len += ft_putnbr_long(va_arg(arg, int));
	else if (specifier == 'x')
		*len += ft_lower(va_arg(arg, int));
	else if (specifier == 'X')
		*len += ft_upper(va_arg(arg, int));
	else if (specifier == '%')
		*len += ft_putchar('%');
	else
		*len += ft_putchar(specifier);
}

int	ft_printf(const char *format, ...)
{
	va_list	arg;
	int		i;
	int		len;

	i = 0;
	len = 0;
	va_start(arg, format);
	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			ft_type(format[i + 1], arg, &len);
			i++;
		}
		else
			len += ft_putchar(format[i]);
		i++;
	}
	va_end(arg);
	return (len);
}
