/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarponen <aarponen@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 16:12:54 by aarponen          #+#    #+#             */
/*   Updated: 2023/11/30 14:20:24 by aarponen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int	ft_printf(const char *input, ...);
int	ft_check_format(const char *input, va_list args);
int	ft_putint(int n);
int	ft_putunsigned(unsigned int n);
int	ft_putchar(int i);
int	ft_putstr(char *s);
int	ft_putpointer(unsigned long ptr);
int	ft_puthex(unsigned int nb, const char *input);
int	ft_putptr(unsigned long nb);

#endif
