/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbaltaza <dbaltaza@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/02 13:42:35 by dbaltaza          #+#    #+#             */
/*   Updated: 2025/11/03 17:10:28 by dbaltaza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifdef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>
# include <limits.h>
# include <stdint.h>
# include "libft.a"

/* ft_printf.c */
int ft_printf(const char *fmt, ...);

/* ft_printf_utils.c */
int	ft_putptr_printf(void *ptr);
int	ft_putnbr_printf(int n);
int	ft_putunsigned_printf(unsigned int n);
int	ft_puthex_printf(unsigned int n, char format);

#endif