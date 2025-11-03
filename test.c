/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbaltaza <dbaltaza@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 17:56:04 by dbaltaza          #+#    #+#             */
/*   Updated: 2025/11/03 18:01:05 by dbaltaza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int main(void)
{
    printf("Simple test:\n");
    ft_printf("%u\n", 42);
    ft_printf("%u %u\n", 42, 100);
    ft_printf("%u %u %u\n", 1, 2, 3);
    
    printf("\nExpected:\n");
    printf("%u\n", 42);
    printf("%u %u\n", 42, 100);
    printf("%u %u %u\n", 1, 2, 3);
    
    return 0;
}