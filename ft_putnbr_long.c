/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_long.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saait-si <saait-si@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/30 23:00:20 by saait-si          #+#    #+#             */
/*   Updated: 2023/12/31 20:10:01 by saait-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_long(unsigned int n)
{
	int	len;

	len = 0;
	if (n >= 0 && n < 10)
	{
		ft_putchar(n + '0');
		len += 1;
	}
	else if (n > 9)
	{
		len += ft_putnbr_long(n / 10);
		len += ft_putnbr_long(n % 10);
	}
	return (len);
}
