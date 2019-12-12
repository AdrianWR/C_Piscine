/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroque <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/03 12:17:43 by aroque            #+#    #+#             */
/*   Updated: 2019/12/03 21:19:43 by aroque           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_strncmp.c"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int	main(int argc, char *argv[])
{
	(void) argc;
	int n = atoi(argv[3]);
	char *str1 = argv[1];
	char *str2 = argv[2];
	printf("Resultado da biblioteca: %d\n", strncmp(str1, str2, n));
	printf("Resultado de ft_strcmp:  %d\n", ft_strncmp(str1, str2, n));
}
