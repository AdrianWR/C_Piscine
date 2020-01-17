/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroque <aroque@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/16 22:04:26 by aroque            #+#    #+#             */
/*   Updated: 2020/01/16 22:42:38 by aroque           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_count_if(char **tab, int length, int (*f)(char*));

int	ft_strlen(char *str)
{
	if (!(*str))
		return (0);
	else
		return (ft_strlen(str + 1) + 1);
}

int	main(int argc, char *argv[])
{
	printf("%d\n", ft_count_if(&argv[1], argc - 1, ft_strlen));
}
