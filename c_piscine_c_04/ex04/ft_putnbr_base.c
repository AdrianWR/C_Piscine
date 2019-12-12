/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroque <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/05 11:34:20 by aroque            #+#    #+#             */
/*   Updated: 2019/12/09 12:16:31 by aroque           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void			ft_putchar(char c)
{
	write(1, &c, 1);
}

unsigned int	ft_strlen(char *str)
{
	unsigned int i;

	i = 0;
	while (*(str + i))
	{
		i++;
	}
	return (i);
}

int				check_repetition(char *str)
{
	char *checker;

	checker = str;
	while (*checker)
	{
		str = checker + 1;
		while (*str)
		{
			if (*checker == *str || *str == '+' || *str == '-')
			{
				return (1);
			}
			str++;
		}
		checker++;
	}
	return (0);
}

void			print_nbr_base(int nbr, char *base)
{
	unsigned int n;

	n = 0;
	if (nbr >= 0)
	{
		n = nbr;
	}
	if (nbr < 0)
	{
		n = -nbr;
		ft_putchar('-');
	}
	if (n >= ft_strlen(base))
	{
		print_nbr_base(n / (ft_strlen(base)), base);
		print_nbr_base(n % (ft_strlen(base)), base);
	}
	else
	{
		ft_putchar(*(base + n));
	}
}

void			ft_putnbr_base(int nbr, char *base)
{
	if (ft_strlen(base) > 1)
	{
		if (!check_repetition(base))
		{
			print_nbr_base(nbr, base);
		}
	}
}
