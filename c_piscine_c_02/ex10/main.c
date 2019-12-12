/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroque <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/02 14:49:45 by aroque            #+#    #+#             */
/*   Updated: 2019/12/05 18:09:18 by aroque           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_strlcpy.c"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int		main(int argc, char *argv[])
{
	(void) argc;
	char *str;
	char *str2;
	str = (char *) malloc(strlen(argv[1])*sizeof(char));	
	printf("\n-----------------------\n");
	printf("String de entrada: %s\n", argv[1]);	
	printf("-----------------------\n");
	printf("STRLCPY\n");
	printf("Retorno: %lu\n", strlcpy(str, argv[1], atoi(argv[2])));
	printf("String copiada: %s\n", str);
	str2 = (char *) malloc(strlen(argv[1])*sizeof(char));	
	printf("-----------------------\n");
	printf("FT_STRLCPY\n");
	printf("Retorno: %u\n", ft_strlcpy(str2, argv[1], atoi(argv[2])));
	printf("String copiada: %s\n", str2);
	if (!strcmp(str, str2))
	{
		printf("\n-----------------------\n");
		printf("Teste bem suscedido! :)\n");
		printf("-----------------------\n");
	}
}
