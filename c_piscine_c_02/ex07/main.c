/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroque <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/29 15:25:42 by aroque            #+#    #+#             */
/*   Updated: 2019/11/29 15:38:23 by aroque           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_strupcase.c"
#include <stdio.h>

int	main (int argc, char *argv[])
{
	(void) argc;
	char *str;
	char *str_up;
	str = argv[1];

	printf("String de entrada: %s\n", str);
	str_up = ft_strupcase(str);
	printf("String Uppercase:  %s\n", str);
	printf("String de retorno:  %s\n", str_up);
}
