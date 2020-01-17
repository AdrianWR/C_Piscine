/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroque <aroque@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/10 11:42:41 by aroque            #+#    #+#             */
/*   Updated: 2020/01/16 16:45:36 by aroque           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int i;
	int *map;

	i = -1;
	map = malloc(length * sizeof(int));
	while (++i < length)
		map[i] = f(tab[i]);
	return (map);
}
