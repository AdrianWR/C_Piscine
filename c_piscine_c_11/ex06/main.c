/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroque <aroque@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/17 13:31:12 by aroque            #+#    #+#             */
/*   Updated: 2020/01/17 14:15:00 by aroque           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_sort_string_tab(char **tab);

int	main(int argc, char *argv[])
{
	ft_sort_string_tab(&argv[1]);
	while (--argc)
		printf("%s\n", *(++argv));
}
