/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroque <aroque@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/30 12:10:02 by aroque            #+#    #+#             */
/*   Updated: 2019/12/31 01:24:27 by aroque           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "ft_strjoin.c"

int     main(int argc, char *argv[])
{
    int i;
    char **strs;

    i = 0;
    strs = malloc((argc - 2) * sizeof(char *));
    while (i < argc - 2)
    {
        strs[i] = argv[i + 1];
        i++;
    }
    printf("Resultado FT_STRJOIN: %s\n", ft_strjoin(argc - 2, strs, argv[argc - 1]));
}
