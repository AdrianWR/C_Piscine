/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroque <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/26 19:12:18 by aroque            #+#    #+#             */
/*   Updated: 2019/11/27 18:36:57 by aroque           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "ft_div_mod.c"

int	main(int argc, char *argv[ ])
{
	int a, b;
	int div, mod;

	argc = 0;
	a = atoi(argv[1]);
	b = atoi(argv[2]);
	ft_div_mod(a, b, &div, &mod);	
	if (div == a / b && mod == a % b)
	{
		printf("a = %d\nb = %d\ndiv = %d\nmod = %d\n", a , b, div, mod);
		printf("Teste bem suscedido! :)\n");
	}
	else
	{
		printf("TESTE MAL SUSCEDIDO!!!");
	}
}
