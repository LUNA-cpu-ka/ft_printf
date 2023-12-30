/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saait-si <saait-si@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/30 04:28:45 by saait-si          #+#    #+#             */
/*   Updated: 2023/12/30 04:58:25 by saait-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int n)
{
	int	len;
	int	nb;

	len = 0;
	nb = n;
	if (n >= 0 && n < 10)
	{
		len += ft_putchar(nb + '0');
	}
	else if (n < 0)
	{
		len += ft_putchar('-');
		len += ft_putnbr(nb * (-1));
	}
	else
	{
		len += ft_putnbr(nb / 10);
		len += ft_putnbr(nb % 10);
	}
	return (len);
}
