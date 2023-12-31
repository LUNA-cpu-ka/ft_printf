/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saait-si <saait-si@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 21:23:44 by saait-si          #+#    #+#             */
/*   Updated: 2023/12/31 21:09:14 by saait-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//diri m3akk .macos

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdio.h>
# include <stdarg.h>
# include <unistd.h>

int	ft_printf(const char *format, ...);
int	ft_putnbr(int n);
int	ft_putchar(char c);
int	ft_putstr(char *str);
int	ft_putnbr_long(unsigned int n);
int	ft_putadress(unsigned long p);
int	ft_lower(unsigned int x);
int	ft_upper(unsigned int X);
#endif
