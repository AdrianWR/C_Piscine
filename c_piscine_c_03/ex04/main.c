/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroque <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/04 09:19:50 by aroque            #+#    #+#             */
/*   Updated: 2019/12/04 17:58:50 by aroque           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_strstr.c"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int		main(int argc, char *argv[])
{
	char *needle;
	char *hay_std;
	char *hay;
	char *result_std;
	char *result;

	(void) argc;
	hay_std	 =	(char *)malloc((strlen(argv[1])) * sizeof(char));
	hay_std	 = 	argv[1];
	hay 	 =	(char *)malloc((strlen(argv[1])) * sizeof(char));
	hay		 = 	argv[1];
	needle 	 =	(char *)malloc(strlen(argv[2]) * sizeof(char));
	needle 	 = 	argv[2];

	printf("\n---------------------------------------\n");
	printf("STRSTR");
	printf("\n---------------------------------------\n");
	result_std = strstr(hay_std, needle);
	printf("Resultado da biblioteca: %s\n", hay_std);
	printf("Retorno da biblioteca:   %s\n", result_std);
	printf("\n---------------------------------------\n");
	printf("FT_STRSTR");
	printf("\n---------------------------------------\n");
	result = ft_strstr(hay, needle);
	printf("Resultado da função FT: %s\n", hay);
	printf("Retorno da função FT:   %s\n", result);
	printf("\n---------------------------------------\n");
}
