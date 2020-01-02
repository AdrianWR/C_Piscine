/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroque <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/22 19:52:06 by aroque            #+#    #+#             */
/*   Updated: 2019/12/31 12:30:06 by aroque           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
        unsigned int n;

        n = 0;
	if (nb < 0)
        {
		ft_putchar('-');
		n = -nb;
        }
        if (nb >= 0)
        {
                n = nb;
        }
	if (n >= 10)
        {
		ft_putnbr(n / 10);
		ft_putnbr(n % 10);
        }
	else
        {
		ft_putchar(n + '0');
        }
}
