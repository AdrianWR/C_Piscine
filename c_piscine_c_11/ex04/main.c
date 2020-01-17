/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroque <aroque@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/16 22:46:05 by aroque            #+#    #+#             */
/*   Updated: 2020/01/16 23:03:38 by aroque           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_is_sort(int *tab, int length, int (*f)(int, int));

int ft_greater_than(int a, int b)
{
	return (a - b);
}

int	main(int argc, char *argv[])
{
	int i;
	int tab[argc];

	i = -1;
	while (++i < argc - 1)
		tab[i] = atoi(argv[i + 1]);
	printf("%d\n", ft_is_sort(tab, argc - 1, ft_greater_than));
}
