/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroque <aroque@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/28 16:15:27 by aroque            #+#    #+#             */
/*   Updated: 2019/12/28 17:15:24 by aroque           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int     ft_ultimate_range(int **range, int min, int max)
{
    int i;
    int *arr;

    if (min >= max)
    {
        arr = NULL;
        return (0);
    }
    i = 0;
    arr = malloc((max - min) * sizeof(int));
    while (min < max)
    {
        arr[i++] = min++;
    }
    *range = arr;
    return (i);
}
