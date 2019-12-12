/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroque <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/26 17:46:15 by aroque            #+#    #+#             */
/*   Updated: 2019/11/26 18:36:29 by aroque           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_ft.c"

int main()
{
	int *nbr = NULL;
	int n;

	nbr = &n;
	printf("Testando ft_ft...\n");
	printf("Valor inicial apontado: %d\n", *nbr);
	ft_ft(nbr);
	printf("Valor final apontado: %d\n", *nbr);
	if (*nbr == 42)
	{
		printf("Teste bem suscedido! :)\n");
	}
	else
	{
		printf("TESTE MAL SUSCEDIDO!!!\n");
	}
}
