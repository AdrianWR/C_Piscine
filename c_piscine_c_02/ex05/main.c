/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroque <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/28 20:25:33 by aroque            #+#    #+#             */
/*   Updated: 2019/11/29 15:06:37 by aroque           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_str_is_uppercase.c"
#include <stdio.h>

int	main(int argc, char *argv[])
{
	argc = 0;
	if (ft_str_is_uppercase(argv[1]))
	{
		printf("A string possui apenas letras maiúsculas! (ou é vazia)\n");
	}	
	else
	{
		printf("A string NÃO possui apenas letras maiúsculas!\n");
	}
}
