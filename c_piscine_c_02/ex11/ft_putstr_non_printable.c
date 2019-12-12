/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_with_non_printable.c                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroque <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/29 17:49:12 by aroque            #+#    #+#             */
/*   Updated: 2019/12/03 18:10:17 by aroque           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putchar_hex(char c)
{
	int un;

	ft_putchar(c / 16 + '0');
	un = c % 16;
	if (un < 0x0a)
	{
		ft_putchar(un + '0');
	}
	else
	{
		un -= 0x0a;
		ft_putchar(un + 'a');
	}
}

int		ft_str_is_printable(char *str)
{
	if (*str >= 0x20 && *str < 0x7f)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

void	ft_putstr_non_printable(char *str)
{
	while (*str)
	{
		if (ft_str_is_printable(str))
		{
			ft_putchar(*str);
		}
		else
		{
			ft_putchar(0x5c);
			ft_putchar_hex(*str);
		}
		str++;
	}
}
