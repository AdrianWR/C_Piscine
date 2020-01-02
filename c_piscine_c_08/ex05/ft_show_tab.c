/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroque <aroque@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/31 11:25:42 by aroque            #+#    #+#             */
/*   Updated: 2019/12/31 13:43:34 by aroque           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_stock_str.h"

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void    ft_putstr(char *str)
{
    if (*str)
    {
        ft_putchar(*str);
        ft_putstr(++str);
    }
}

void    ft_putnbr(int nb)
{
    unsigned int n;
    
    n = 0;
    if (nb < 0)
    {
        ft_putchar('-');
        n = -nb;
    }
    else
    {
        n = nb;
    }
    if (n >= 10)
        ft_putnbr(n / 10);
    ft_putchar(n + '0');
}

void    ft_show_tab(struct s_stock_str *par)
{
    while (par->str)
    {
        ft_putstr(par->str);
        ft_putchar('\n');
        ft_putnbr(par->size);
        ft_putchar('\n');
        ft_putstr(par++->copy);
        ft_putchar('\n');
    }
}
