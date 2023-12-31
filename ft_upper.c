/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_upper.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saait-si <saait-si@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/31 11:35:41 by saait-si          #+#    #+#             */
/*   Updated: 2023/12/31 20:18:10 by saait-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_upper(unsigned int x)
{
	int		len;
	char	*base;

	len = 0;
	base = "0123456789ABCDEF";
	if (x >= 16)
	{
		len += ft_upper(x / 16);
		len += ft_upper(x % 16);
	}
	else
		len += ft_putchar(base[x]);
	return (len);
}
