/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroque <aroque@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/28 16:15:27 by aroque            #+#    #+#             */
/*   Updated: 2019/12/28 16:29:20 by aroque           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int     *ft_range(int min, int max)
{
    int i;
    int len;
    int *range;

    if (min >= max)
    {
        return (NULL);
    }
    i = 0;
    len = max - min;
    range = malloc((max - min) * sizeof(int));
    while (i < len)
    {
        range[i++] = min++;
    }
    return (range);
}
