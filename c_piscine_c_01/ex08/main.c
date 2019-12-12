/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroque <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/27 19:18:33 by aroque            #+#    #+#             */
/*   Updated: 2019/11/28 15:14:22 by aroque           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_sort_int_tab.c"
#include <stdlib.h>
#include <stdio.h>

void	print_sequence(int *seq, int n)
{
	int counter = 0;
	while (counter < n)
	{
		printf(" %d", *seq);
		seq++;
		counter++;
	}
	printf("\n");
}

int	main(int argc, char *argv[])
{
	int num_string[argc];
	int i = 1;
	while (argv[i] != '\0')
	{
		num_string[i-1] = atoi(argv[i]);
		i++;
	}
	printf("Sequência inserida:");
	print_sequence(num_string, argc-1);
	ft_sort_int_tab(num_string, argc-1);	
	printf("Sequência ordenada:");
	print_sequence(num_string, argc-1);
}
