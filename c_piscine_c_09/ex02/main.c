/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroque <aroque@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/01 15:47:35 by aroque            #+#    #+#             */
/*   Updated: 2020/01/01 20:57:32 by aroque           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "ft_split.c"

int	main(int argc, char *argv[])
{
	(void) argc;
	char **split = ft_split(argv[1], argv[2]);
	printf("%s\n", split[0]);
	printf("%s\n", split[1]);
	printf("%s\n", argv[1]);
}
