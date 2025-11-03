/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbaltaza <dbaltaza@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/02 13:42:35 by dbaltaza          #+#    #+#             */
/*   Updated: 2025/11/03 18:08:02 by dbaltaza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>
# include "libft/libft.h"

/* ft_printf.c */
int	ft_printf(const char *format, ...);

/* ft_printf_utils.c */
int	ft_putchar(char c);
int	ft_putstr(char *s);
int	ft_putptr_printf(void *ptr);
int	ft_putnbr_printf(int n);
int	ft_putunsigned_printf(unsigned int n);
int	ft_puthex_printf(unsigned int n, char format);
int	ft_puthex_long(unsigned long num);

#endif