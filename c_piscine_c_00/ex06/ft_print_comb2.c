/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroque <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/22 17:55:36 by aroque            #+#    #+#             */
/*   Updated: 2019/11/22 22:21:33 by aroque           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	{
		ft_putchar(nb / 10 + '0');
		ft_putchar(nb % 10 + '0');
	}
}

void	ft_print_comb2(void)
{
	int n1;
	int n2;

	n1 = 0;
	n2 = 1;
	while (n1 <= 98)
	{
		while (n2 <= 99)
		{
			ft_putnbr(n1);
			ft_putchar(' ');
			ft_putnbr(n2);
			if (n1 < 98)
			{
				write(1, ", ", 2);
			}
			n2++;
		}
		n1++;
		n2 = n1 + 1;
	}
}
