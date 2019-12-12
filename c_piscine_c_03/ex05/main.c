/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroque <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/04 09:19:50 by aroque            #+#    #+#             */
/*   Updated: 2019/12/04 19:59:42 by aroque           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_strlcat.c"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int		main(int argc, char *argv[])
{
	char *src;
	char *dest_std;
	char *dest;
	unsigned int result;
	unsigned int nb;
	unsigned long result_std;

	(void) argc;
	nb = atoi(argv[3]);
	dest_std = (char *)malloc((strlen(argv[1]) + strlen(argv[2])) * sizeof(char));
	dest = (char *)malloc((strlen(argv[1]) + strlen(argv[2])) * sizeof(char));
	src = (char *)malloc(strlen(argv[2]) * sizeof(char));
	strcpy(dest_std, argv[1]);
	src = 	argv[2];
	printf("\n---------------------------------------\n");
	printf("STRLCAT");
	printf("\n---------------------------------------\n");
	result_std = strlcat(dest_std, src, nb);
	printf("Resultado da biblioteca: %s\n", dest_std);
	printf("Retorno da biblioteca:   %lu\n", result_std);
	strcpy(dest, argv[1]);
	printf("\n---------------------------------------\n");
	printf("FT_STRLCAT");
	printf("\n---------------------------------------\n");
	result = ft_strlcat(dest, src, nb);
	printf("Resultado da função FT: %s\n", dest);
	printf("Retorno da função FT:   %u\n", result);
	printf("\n---------------------------------------\n");
	if (!strcmp(dest_std, dest))
	{
		printf("Teste bem suscedido! :)");
	}
	printf("\n---------------------------------------\n");
}
