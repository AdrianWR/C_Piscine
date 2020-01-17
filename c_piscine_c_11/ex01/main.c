/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroque <aroque@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/10 11:42:54 by aroque            #+#    #+#             */
/*   Updated: 2020/01/16 21:57:15 by aroque           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		ft_atoi(char *str);
int		*ft_map(int *tab, int length, int (*f)(int));

int	ft_dummy_sum(int n)
{
	return (n + 1);
}

int	main(int argc, char *argv[])
{
	int *map;
	int k[argc];
	int i;

	i = 0;
	while (i < argc - 1)
	{
		k[i] = ft_atoi(argv[i + 1]);
		i++;
	}
	map = ft_map(k, i, &ft_dummy_sum);
	i = -1;
	while (++i < argc - 1)
		printf("%d\n", map[i]);
}
