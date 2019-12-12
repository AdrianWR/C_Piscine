/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroque <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/23 12:07:22 by aroque            #+#    #+#             */
/*   Updated: 2019/11/26 12:41:38 by aroque           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	print_matrix(int x, int y);
void	print_line_break(int x, int c);

void	rush02(int x, int y)
{
	if (!(x < 0 || y < 0))
	{
		print_matrix(x, y);
	}
}

void	print_matrix(int x, int y)
{
	int c;

	c = 1;
	while (c <= x * y)
	{
		if (c == 1 || c == x)
		{
			ft_putchar('A');
		}
		else if (c == x * y || c == (x * y - x + 1))
		{
			ft_putchar('C');
		}
		else if (c < x || c > x * y - x || c % x == 1 || c % x == 0)
		{
			ft_putchar('B');
		}
		else
		{
			ft_putchar(' ');
		}
		print_line_break(x, c);
		c++;
	}
}

void	print_line_break(int x, int count)
{
	if (count % x == 0)
	{
		ft_putchar('\n');
	}
}
