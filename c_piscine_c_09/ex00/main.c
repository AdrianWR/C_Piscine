/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroque <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/05 21:03:25 by aroque            #+#    #+#             */
/*   Updated: 2019/12/31 15:57:47 by aroque           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"
#include <stdio.h>

int	main(int argc, char *argv[])
{
    (void) argc;
    int a,b;
    a = 2;
    b = 4;
    ft_putstr("Iniciando teste..");
    ft_putchar('.');
    ft_putchar('\n');
    ft_putchar(ft_strlen("teste") + '0');
    ft_putchar('\n');
    ft_swap(&a, &b);
    ft_putstr("a = ");
    ft_putchar(a + '0');
    ft_putchar('\n');
    ft_putstr("b = ");
    ft_putchar(b + '0');
    ft_putchar('\n');
    printf("ft_strcmp: %d\n", ft_strcmp(argv[1], argv[2]));
}
