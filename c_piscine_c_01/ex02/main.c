/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroque <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/26 18:52:58 by aroque            #+#    #+#             */
/*   Updated: 2019/11/26 19:09:42 by aroque           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#include "ft_swap.c"

int	main(void)
{
	int a, a_inicial;
	int b, b_inicial;

	srand(time(NULL));
	a = rand() % 100;
	a_inicial = a;
	b = rand() % 100;	
	b_inicial = b;
	printf("Valor inicial de 'a': %d\n", a);
	printf("Valor inicial de 'b': %d\n", b);
	ft_swap(&a, &b);
	printf("Valor final de 'a': %d\n", a);
	printf("Valor final de 'b': %d\n", b);
	if (a_inicial == b && b_inicial == a)
	{
		printf("Teste bem suscedido! :)\n");
	}
	else
	{
		printf("TESTE MAL SUSCEDIDO!!!\n");
	}

}
