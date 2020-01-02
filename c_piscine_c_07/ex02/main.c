/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroque <aroque@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/28 16:16:23 by aroque            #+#    #+#             */
/*   Updated: 2019/12/28 17:16:50 by aroque           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "ft_ultimate_range.c"

int     main(int argc, char *argv[])
{
    int i;
    int min;
    int max;
    int *range;

    (void) argc;
    i = 0;
    min = atoi(argv[1]);
    max = atoi(argv[2]);
    printf("Valor de Retorno: %d\n", ft_ultimate_range(&range, min, max));
    while (i < max - min)
    {
        printf("%d ", range[i]);
        i++;
    }
    printf("\n");
}
