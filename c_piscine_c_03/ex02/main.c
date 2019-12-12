/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroque <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/04 09:19:50 by aroque            #+#    #+#             */
/*   Updated: 2019/12/04 15:43:50 by aroque           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_strcat.c"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int		main(int argc, char *argv[])
{
	char *src;
	char *dest_std;
	char *result_std;
	char *dest;
	char *result;

	(void) argc;
	dest_std = (char *)malloc((strlen(argv[1]) + strlen(argv[2])) * sizeof(char));
	dest = (char *)malloc((strlen(argv[1]) + strlen(argv[2])) * sizeof(char));
	src = (char *)malloc(strlen(argv[2]) * sizeof(char));
	strcpy(dest_std, argv[1]);
	src = 	argv[2];
	printf("\n---------------------------------------\n");
	printf("STRCAT");
	printf("\n---------------------------------------\n");
	result_std = strcat(dest_std, src);
	printf("Resultado da biblioteca: %s\n", dest_std);
	printf("Retorno da biblioteca:   %s\n", result_std);
	strcpy(dest, argv[1]);
	printf("\n---------------------------------------\n");
	printf("FT_STRCAT");
	printf("\n---------------------------------------\n");
	result = ft_strcat(dest, src);
	printf("Resultado da função FT: %s\n", dest);
	printf("Retorno da função FT:   %s\n", result);
	printf("\n---------------------------------------\n");
	if (!strcmp(dest_std, dest))
	{
		printf("Teste bem suscedido! :)");
	}
	printf("\n---------------------------------------\n");
}
