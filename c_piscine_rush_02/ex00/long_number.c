/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   long_number.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroque <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/08 06:23:55 by aroque            #+#    #+#             */
/*   Updated: 2019/12/08 12:32:59 by aroque           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "hash_table.h"
#include "ft.h"

void	ft_print_space(char *str)
{
	if (ft_strlen(str) > 1)
	{
		ft_putchar(' ');
	}
}

void	ft_long_number(char *str, s_ht *ht)
{
	int len;
	len = ft_strlen(str);
	if (len % 3 == 0)
	{
		print_centena(ht, str, 0);
	}
	else if (len % 3 == 2)
	{
		print_dezena(ht, str, 0);
	}
	else
	{
		print_unidade(ht, str, 0);
	}
}

void	print_centena(s_ht *ht,  char *digit, int flag)
{
	char *str;

	str = malloc(1*sizeof(char));
	if (*digit != '0')
	{
		str[0] = digit[0];
		ft_putstr(ht_get(ht, str));
		ft_putchar(' ');
		ft_putstr(ht_get(ht, "100"));
	}
	else
	{
		flag++;
	}
	{
		ft_putchar(' ');
	}
	print_dezena(ht, digit + 1, flag);
}

void	print_dezena(s_ht *ht, char *digit, int flag)
{
	char *str;

	str = malloc(2 * sizeof(char));
	if (*(digit - 1) && flag > 1)
	{
	}
	if (*digit >= '2')
	{
		str[0] = digit[0];
		str[1] = '0';
		ft_putstr(ht_get(ht, str));
		ft_print_space(digit);
		print_unidade(ht, digit + 1, flag);
	}
	else if (*digit == '1')
	{
		str[0] = digit[0];
		str[1] = digit[1];
		ft_putstr(ht_get(ht, str));
		if (ft_strlen(digit) > 3)
		{
			ft_print_space(digit);
			print_magnitude(ht, digit, flag);
		}
	}
	else
	{
		flag++;
		print_unidade(ht, digit + 1, flag);
	}
}

void	print_unidade(s_ht *ht, char *digit, int flag)
{	
	char *str;
		
	str = malloc(1 * sizeof(char));
	if (*digit > '0')
	{
		*str = *digit;
		ft_putstr(ht_get(ht, str));
		ft_putchar(' ');
	}
	else
	{
		flag++;
	}
	if (ft_strlen(digit) > 3)
	{
		print_magnitude(ht, digit, flag);
	}
}

void	print_magnitude(s_ht *ht, char *digit, int flag)
{
	char *mag;
	if (flag < 3)
	{
		mag = get_magnitude(ft_strlen(digit));
		ft_putstr(ht_get(ht, mag));
		ft_putchar(' ');
	}
	print_centena(ht, digit + 1, flag);
}

char	*get_magnitude(int len)
{
	char *mag;
	char *first;

	len--;
	len = len - (len % 3);
	mag = malloc(len * sizeof(char));
	first = mag;
	*mag = '1';
	while (len--)
	{
		mag++;
		*mag = '0';
	}
	return first;
}
