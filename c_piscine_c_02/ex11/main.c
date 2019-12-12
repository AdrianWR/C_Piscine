/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroque <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/29 15:25:42 by aroque            #+#    #+#             */
/*   Updated: 2019/12/03 18:11:49 by aroque           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_putstr_non_printable.c"
#include <stdio.h>

int	main (int argc, char *argv[])
{
	(void) argc;
	char *str;

	str = argv[1];
	ft_putstr_non_printable(str);
}
