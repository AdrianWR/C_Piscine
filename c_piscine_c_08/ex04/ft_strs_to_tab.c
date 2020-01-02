/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroque <aroque@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/31 11:26:51 by aroque            #+#    #+#             */
/*   Updated: 2019/12/31 13:45:46 by aroque           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "ft_stock_str.h"

int     ft_strlen(char *str)
{
    if (!(*str))
    {
        return (0);
    }
    else
    {
        return (ft_strlen(++str) + 1);
    }
}

char    *ft_strdup(char *src)
{
    int i;
    char *dest;

    i = 0;
    dest = malloc(ft_strlen(src) * sizeof(char));
    while (src[i])
    {
        dest[i] = src[i];
        i++;
    }
    return (dest);                           
}

struct  s_stock_str *ft_strs_to_tab(int ac, char **av)
{
    int i;
    t_stock_str *stock_str;

    (void) av;
    if (!ac)
    {
        return (NULL);
    }
    i = 0;
    stock_str = malloc((ac + 1) * sizeof(t_stock_str));
    while (i < ac)
    {
        stock_str[i].size = ft_strlen(av[i]);
        stock_str[i].str = av[i];
        stock_str[i].copy = ft_strdup(av[i]);
        i++;
    }
    stock_str[ac].str = 0;
    return (stock_str);
}
