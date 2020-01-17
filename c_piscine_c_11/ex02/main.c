/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroque <aroque@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/16 22:04:26 by aroque            #+#    #+#             */
/*   Updated: 2020/01/16 22:08:43 by aroque           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_any(char **tab, int (*f)(char*));

int	ft_strlen(char *str)
{
	if (!(*str))
		return (0);
	else
		return (ft_strlen(str + 1) + 1);
}

int	main(int argc, char *argv[])
{
	(void) argc;
	if (ft_any(&argv[1], ft_strlen))
		printf("FT_ANY = 1\n");
	else
		printf("FT_ANY = 0\n");
}
