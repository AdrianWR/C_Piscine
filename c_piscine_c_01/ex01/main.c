/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroque <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/26 18:38:02 by aroque            #+#    #+#             */
/*   Updated: 2019/11/26 18:49:13 by aroque           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_ultimate_ft.c"

int main()
{
	int n;
	int *ptr1;
	int **ptr2;
	int ***ptr3;
	int ****ptr4;
	int *****ptr5;
	int ******ptr6;
	int *******ptr7;
	int ********ptr8;
	int *********ptr9 = NULL;

	ptr1 = &n;
	ptr2 = &ptr1;
	ptr3 = &ptr2;
	ptr4 = &ptr3;
	ptr5 = &ptr4;
	ptr6 = &ptr5;
	ptr7 = &ptr6;
	ptr8 = &ptr7;
	ptr9 = &ptr8;
	
	ft_ultimate_ft(ptr9);
	printf("Testando ft_ultimate_ft...\n");
	printf("Valor apontado por ptr1: %d\n", *ptr1);
	printf("Valor apontado por ptr2: %d\n", **ptr2);
	printf("Valor apontado por ptr3: %d\n", ***ptr3);
	printf("Valor apontado por ptr4: %d\n", ****ptr4);
	printf("Valor apontado por ptr5: %d\n", *****ptr5);
	printf("Valor apontado por ptr6: %d\n", ******ptr6);
	printf("Valor apontado por ptr7: %d\n", *******ptr7);
	printf("Valor apontado por ptr8: %d\n", ********ptr8);
	printf("Valor apontado por ptr9: %d\n", *********ptr9);
	if (*********ptr9 == 42)
	{
		printf("Teste bem suscedido! :)\n");
	}
	else
	{
		printf("TESTE MAL SUSCEDIDO!!!\n");
	}
}
