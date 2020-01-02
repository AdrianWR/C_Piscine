/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroque <aroque@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/28 16:02:57 by aroque            #+#    #+#             */
/*   Updated: 2019/12/28 16:13:52 by aroque           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "ft_strdup.c"

int     main(int argc, char *argv[])
{
    (void) argc;
    printf("--------------------------------------------\n");
    printf("Resultado da Biblioteca: %s\n", strdup(argv[1]));
    printf("Resultado FT_STRDUP:     %s\n", ft_strdup(argv[1]));
    printf("--------------------------------------------\n");
}
