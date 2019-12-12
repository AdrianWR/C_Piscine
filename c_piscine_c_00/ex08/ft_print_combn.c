/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroque <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/23 17:36:56 by aroque            #+#    #+#             */
/*   Updated: 2019/12/05 13:18:56 by aroque           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	generate_zero(char str[], int n);
void	full_adder(char s[], int n);
int		check_distinct_numbers(char seq[], int n);
int		limit_counter(int n);

void	ft_print_combn(int n)
{
	char	str_nbr[n];
	int		count;
	int		limit;

	count = 0;
	limit = limit_counter(n);
	generate_zero(str_nbr, n);
	while (count < limit)
	{
		if (check_distinct_numbers(str_nbr, n))
		{
			write(1, str_nbr, n);
			write(1, ", ", 2);
			count++;
		}
		full_adder(str_nbr, n);
	}
	write(1, "\b\b", 2);
}

void	full_adder(char s[], int n)
{
	int carry;

	carry = 1;
	n--;
	while (n >= 0)
	{
		if (s[n] == '9' && carry == 1)
		{
			s[n] = '0';
			carry = 1;
		}
		else if (carry == 1)
		{
			s[n] = s[n] + 1;
			carry = 0;
		}
		n--;
	}
}

void	generate_zero(char str[], int n)
{
	int i;

	i = 0;
	while (i < n)
	{
		str[i] = i + '0';
		i++;
	}
}

int		limit_counter(int n)
{
	if (n == 1)
	{
		return (10);
	}
	else
	{
		return ((10 - n + 1) * limit_counter(n - 1) / n);
	}
}

int		check_distinct_numbers(char seq[], int n)
{
	int i;
	int j;

	i = 0;
	j = 1;
	while (i < n)
	{
		j = i + 1;
		while (j < n)
		{
			if (seq[i] >= seq[j])
			{
				return (0);
			}
			else
			{
				j++;
			}
		}
		i++;
	}
	return (1);
}
