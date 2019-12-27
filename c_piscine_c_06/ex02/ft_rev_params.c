/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroque <aroque@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/27 17:46:16 by aroque            #+#    #+#             */
/*   Updated: 2019/12/27 17:52:27 by aroque           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
    while (*str != '\0')
    {
	write(1, str, 1);
	str++;
    }
}

int     main(int argc, char *argv[])
{
    int i;

    i = argc - 1;
    while (i > 0)
    {
        ft_putstr(argv[i]);
        ft_putstr("\n");
        i--;
    }
}
