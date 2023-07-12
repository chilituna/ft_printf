/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnumber.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarponen <aarponen@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 16:24:23 by aarponen          #+#    #+#             */
/*   Updated: 2023/07/05 16:42:31 by aarponen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putint(int n)
{
	int	len;

	len = 0;
	if (n == -2147483648)
	{
		ft_putstr("-2147483648");
		return (11);
	}
	if (n < 0)
	{
		ft_putchar('-');
		n = -n;
		len++;
	}
	if (n >= 10)
	{
		len += ft_putint(n / 10);
		len += ft_putint(n % 10);
	}
	else
	{
		ft_putchar(n + '0');
		len++;
	}
	return (len);
}

int	ft_putunsigned(unsigned int n)
{
	int	len;

	len = 0;
	if (n >= 10)
	{
		len += ft_putunsigned(n / 10);
		len += ft_putunsigned(n % 10);
	}
	else
	{
		ft_putchar(n + '0');
		len++;
	}
	return (len);
}
