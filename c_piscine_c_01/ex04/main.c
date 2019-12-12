/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroque <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/27 18:39:54 by aroque            #+#    #+#             */
/*   Updated: 2019/12/03 16:11:27 by aroque           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ultimate_div_mod.c"
#include <stdlib.h>
#include <stdio.h>

int	main(int argc, char *argv[ ])
{
	(void) argc;
	int a = atoi(argv[1]);
	int b = atoi(argv[2]);
	int div = a / b;
	int mod = a % b;

	printf("a = %d\n", a);
	printf("b = %d\n", b);
	ft_ultimate_div_mod(&a, &b);
	printf("Divisão a / b = %d\n", a);
	printf("Módulo a b = %d\n", b);
	if (a == div && b == mod)
	{
		printf("Teste bem suscedido! :)\n");	
	}
	else
	{
		printf("TESTE MAL SUSCEDIDO!!!\n");
	}
}
