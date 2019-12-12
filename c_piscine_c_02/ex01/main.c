/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroque <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/28 16:09:21 by aroque            #+#    #+#             */
/*   Updated: 2019/12/03 17:35:33 by aroque           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ft_strncpy.c"

int	main(int argc, char *argv[ ])
{
	int n;	
    n = atoi(argv[2]);
    //char dest[n];
	//char dest_default[n];

	(void) argc;
	//char source[] = "source";
	//char destin[] = "destination";
	//ft_strncpy(destin, source, 6);
	//printf("Teste padrão: %s\n", destin);

	char dest[] = "Oi Gian, beleza parça?";
	char dest_default[] = "Oi Gian, beleza parça?";
    ft_strncpy(dest, argv[1], n);
    strncpy(dest_default, argv[1], n);
	printf("Resultado da função padrão: %s\n", dest_default);
	printf("Resultado da função nova:   %s\n", dest);
	if (!strcmp(dest, dest_default))
	{
		printf("Teste bem suscedido! :)\n");
	}
	else
	{
		printf("TESTE MAL SUSCEDIDO!!!\n");
	}
    return 0;
}
