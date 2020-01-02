/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroque <aroque@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/31 11:07:13 by aroque            #+#    #+#             */
/*   Updated: 2019/12/31 11:17:27 by aroque           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_point.h"
#include <stdio.h>

void    set_point(t_point *point)
{
    point->x = 42;
    point->y = 21;
}

int     main(void)
{
    t_point     point;

    set_point(&point);
    return (0);
}
