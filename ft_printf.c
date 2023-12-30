/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saait-si <saait-si@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/30 04:28:39 by saait-si          #+#    #+#             */
/*   Updated: 2023/12/30 07:08:27 by saait-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

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
		if (format[i] == '%' && format[i + 1] == 'c')
			len += ft_putchar(va_arg(arg, int));
		if (format[i] == '%' && (format[i + 1] == 'd' || format[i + 1] == 'i'))
			len += ft_putnbr(va_arg(arg, int));
		if (format[i] == '%' && format[i + 1] == 's')
			len += ft_putstr(va_arg(arg, char *));
		if (format[i] == '%')
			len += ft_putchar('%');
		else
		{
			ft_putchar(format[i]);
			len++;
			i++;
		}
	}
}
