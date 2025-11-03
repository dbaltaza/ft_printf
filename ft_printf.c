/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbaltaza <dbaltaza@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/02 13:42:36 by dbaltaza          #+#    #+#             */
/*   Updated: 2025/11/03 17:08:51 by dbaltaza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_format_handler(char format, va_list args)
{
    int	count;

    count = 0;
    if (format == 'c')
        count = ft_putchar(va_arg(args, int));         // single char ✅
    else if (format == 's')
        count = ft_putstr(va_arg(args, char *));       // string ✅
    else if (format == 'p')
        count = ft_putptr_printf(va_arg(args, void *));       // pointer - needs new function
    else if (format == 'd' || format == 'i')                  // same handler for both
        count = ft_putnbr_printf(va_arg(args, int));         // decimal/integer - needs new function
    else if (format == 'u')
        count = ft_putunsigned_printf(va_arg(args, unsigned int)); // unsigned - needs new function
    else if (format == 'x' || format == 'X')
        count = ft_puthex_printf(va_arg(args, unsigned int), format); // hex - needs new function
    else if (format == '%')
        count = ft_putchar('%');

    return (count);
}

int ft_printf(const char *format, ...)
{
    va_list args;
    int     count;
    int     i;

    i = 0;
    count = 0;
	va_start(args, format);
    
    while (format[i])
    {
		if (format[i] == '%')
			count += ft_format_handler(format[++i], args)
    }

    // 3. End va_args here
	va_end(args);
    return (count);
}
