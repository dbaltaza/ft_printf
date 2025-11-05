/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbaltaza <dbaltaza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 17:56:04 by dbaltaza          #+#    #+#             */
/*   Updated: 2025/11/05 12:38:19 by dbaltaza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int main(void)
{

    int *ptr = NULL;
    printf("Simple test:\n");
    ft_printf("%p\n", ptr);
    
    printf("\nExpected:\n");
    printf("%p\n", ptr);
    
    return 0;
}
