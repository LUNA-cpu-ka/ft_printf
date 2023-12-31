/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putadress.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saait-si <saait-si@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/30 23:15:47 by saait-si          #+#    #+#             */
/*   Updated: 2023/12/31 11:17:13 by saait-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putadress(unsigned long p)
{
	int		len;
	char	*base;

	len = 0;
	base = "0123456789abcdef";
	if (p >= 16)
	{
		len += ft_putadress(p / 16);
		len += ft_putadress(p % 16);
	}
	else
	{
		len += ft_putchar(base[p]);
	}
	return (len);
}
