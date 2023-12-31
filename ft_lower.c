/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lower.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saait-si <saait-si@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/31 11:35:03 by saait-si          #+#    #+#             */
/*   Updated: 2023/12/31 20:18:35 by saait-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_lower(unsigned int x)
{
	char	*base;
	int		len;

	base = "0123456789abcdef";
	len = 0;
	if (x >= 16)
	{
		len += ft_lower(x / 16);
		len += ft_lower(x % 16);
	}
	else
		len += ft_putchar(base[x]);
	return (len);
}
