/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroque <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/05 21:35:41 by aroque            #+#    #+#             */
/*   Updated: 2019/12/31 01:42:16 by aroque           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_abs.h"
#include <stdlib.h>
#include <stdio.h>

int	main(int argc, char *argv[])
{
	(void) argc;
	int k = atoi(argv[1]);
        printf("Valor Absoluto: %d\n", ABS(k));

	
}
