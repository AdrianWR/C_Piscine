/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroque <aroque@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/25 22:09:33 by aroque            #+#    #+#             */
/*   Updated: 2019/12/26 23:26:00 by aroque           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ten_queens_puzzle.c"
#include <stdio.h>

int	main(void)
{
	printf("Número de Soluções: %d\n", ft_ten_queens_puzzle());
	return (0);
}
