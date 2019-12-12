/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroque <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/28 20:29:45 by aroque            #+#    #+#             */
/*   Updated: 2019/12/03 11:22:57 by aroque           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_strcpy.c"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
    argc = 0;
    int n = 0;
    while (argv[1][n] != '\0')
    {
        n++;
    }
    char src[n];
    char dest[] = "adrian";
    strcpy(src, argv[1]);

    printf("String Original: %s\n", src);
    ft_strcpy(dest, src); 
    printf("String Copiada:  %s\n", dest);
    if (ft_strcpy(dest, src)  == strcpy(dest, src))
    {
       printf("Teste bem suscedido! :)\n");
    }
}
