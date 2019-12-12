/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroque <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/03 12:17:43 by aroque            #+#    #+#             */
/*   Updated: 2019/12/03 20:16:17 by aroque           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_strcmp.c"
#include <string.h>
#include <stdio.h>

int	main(int argc, char *argv[])
{
	(void) argc;
	char *str1 = argv[1];
	char *str2 = argv[2];
	printf("Resultado da biblioteca: %d\n", strcmp(str1, str2));
	printf("Resultado de ft_strcmp:  %d\n", ft_strcmp(str1, str2));
}
