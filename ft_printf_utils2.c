/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbaltaza <dbaltaza@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 18:07:04 by dbaltaza          #+#    #+#             */
/*   Updated: 2025/11/03 18:07:27 by dbaltaza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthex_long(unsigned long num)
{
	char	*hex_digits;
	int		count;

	hex_digits = "0123456789abcdef";
	count = 0;
	if (num >= 16)
		count += ft_puthex_long(num / 16);
	count += ft_putchar(hex_digits[num % 16]);
	return (count);
}

int	ft_puthex_printf(unsigned int n, char format)
{
	char	*hex_digits;
	int		count;

	count = 0;
	if (format == 'x')
		hex_digits = "0123456789abcdef";
	else
		hex_digits = "0123456789ABCDEF";
	if (n >= 16)
		count += ft_puthex_printf(n / 16, format);
	count += ft_putchar(hex_digits[n % 16]);
	return (count);
}
