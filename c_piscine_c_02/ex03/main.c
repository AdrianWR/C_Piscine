/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroque <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/28 20:25:33 by aroque            #+#    #+#             */
/*   Updated: 2019/11/29 14:54:22 by aroque           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_str_is_numeric.c"
#include <stdio.h>

int	main(int argc, char *argv[])
{
	argc = 0;
	if (ft_str_is_numeric(argv[1]))
	{
		printf("A string possui apenas números!");
	}	
	else
	{
		printf("A string NÃO possui apenas números!");
	}
}
