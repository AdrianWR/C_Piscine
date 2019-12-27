/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroque <aroque@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/27 17:32:30 by aroque            #+#    #+#             */
/*   Updated: 2019/12/27 17:36:32 by aroque           ###   ########.fr       */
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
    (void) argc;
    ft_putstr(argv[0]);
    ft_putstr("\n");
    return (0);
}
