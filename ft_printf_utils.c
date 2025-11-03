/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbaltaza <dbaltaza@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 16:23:29 by dbaltaza          #+#    #+#             */
/*   Updated: 2025/11/03 17:11:17 by dbaltaza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putptr_printf(void *ptr)
{
    int	count;

    count = 0;
    count += ft_putstr("0x");                    // Print "0x" prefix
    // Now convert pointer to hex and print it
    // Hint: Cast ptr to unsigned long long first
    // Then convert to hex digits (use helper function)
    return (count);
}

int	ft_putnbr_printf(int n)
{
    int		count;
    char	*num;

    num = ft_itoa(n);
    count = ft_putstr(num);
    free(num);
    return (count);
}

int	ft_putunsigned_printf(unsigned int n)
{
    char	*num;
    int		count;

    num = ft_itoa(n);        // Convert to string
    count = ft_putstr(num);  // Print and count
    free(num);               // Free the string
    return (count);
}

int	ft_puthex_printf(unsigned int n, char format)
{
    int	count;
    
    count = 0;
    // Convert to hex
    // Use format to determine case (x = lowercase, X = uppercase)
    return (count);
}
