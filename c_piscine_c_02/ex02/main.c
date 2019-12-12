/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroque <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/28 19:12:02 by aroque            #+#    #+#             */
/*   Updated: 2019/11/28 20:23:53 by aroque           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_str_is_alpha.c"
#include <stdio.h>

int	main(int argc, char *argv[ ])
{
	argc = 0;
	if (ft_str_is_alpha(argv[1]))
	{
		printf("A string é alpha ou vazia!\n");	
	}
	else
	{
		printf("A entrada possui caracteres não alpha!\n");
	}
}
