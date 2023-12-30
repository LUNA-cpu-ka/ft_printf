/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saait-si <saait-si@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 21:23:44 by saait-si          #+#    #+#             */
/*   Updated: 2023/12/30 07:05:52 by saait-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//diri m3akk .macos

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdio.h>
# include <stdarg.h>
# include <unistd.h>

int	ft_printf(const char *format, ...);
int	ft_putnbr(int i);
int	ft_putchar(char c);
int	ft_putstr(char *str);

#endif
