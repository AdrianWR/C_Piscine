/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroque <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/04 20:47:52 by aroque            #+#    #+#             */
/*   Updated: 2019/12/06 16:58:22 by aroque           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h> 
#include <stdlib.h>
#include "ft_atoi_base.c"

int		main(int argc, char *argv[])
{
	(void) argc;
	printf("\n----------------------------\n");
	printf("String de entrada:   %s\n", argv[1]);
	printf("Resultado - ATOI:    %d\n", atoi(argv[1]));
	printf("Resultado - FT_ATOI: %d\n", ft_atoi_base(argv[1], argv[2]));
	printf("----------------------------\n\n");
}
