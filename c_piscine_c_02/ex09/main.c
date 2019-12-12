/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroque <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/29 15:25:42 by aroque            #+#    #+#             */
/*   Updated: 2019/11/29 16:38:10 by aroque           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_strcapitalize.c"
#include <stdio.h>

int	main (int argc, char *argv[])
{
	(void) argc;
	char *str;
	char *str_lw;
	str = argv[1];

	printf("String de entrada: %s\n", str);
	str_lw = ft_strcapitalize(str);
	printf("String lowercase:  %s\n", str);
	printf("String de retorno:  %s\n", str_lw);
}
