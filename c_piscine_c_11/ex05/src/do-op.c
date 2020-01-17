/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do-op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroque <aroque@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/17 09:07:14 by aroque            #+#    #+#             */
/*   Updated: 2020/01/17 13:17:20 by aroque           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define MAX_OPERATIONS 5
#include "ft.h"


int		ft_operation_index(char *operator);
void	ft_do_operation(int value1, int value2, int op_index, int (*op[])(int, int));

int	main(int argc, char *argv[])
{
	int value1;
	int value2;
	int op_index;
	int (*op[MAX_OPERATIONS])(int, int);

	if (argc == 4)
	{
		value1 = ft_atoi(argv[1]);
		value2 = ft_atoi(argv[3]);

		op[0] = add;
		op[1] = sub;
		op[2] = div;
		op[3] = mult;
		op[4] = mod;
		op_index = ft_operation_index(argv[2]);
		ft_do_operation(value1, value2, op_index, op);
	}
}

int	ft_operation_index(char *operator)
{
	if (ft_strlen(operator) > 1)
		return (-1);
	else if (*operator == '+')
		return (0);
	else if (*operator == '-')
		return (1);
	else if (*operator == '/')
		return (2);
	else if (*operator == '*')
		return (3);
	else if (*operator == '%')
		return (4);
	else
		return (-1);
}

void	ft_do_operation(int value1, int value2, int op_index, int (*op[])(int, int))
{
	if (op_index < 0)
		ft_putnbr(0);
	else if (op_index == 2 && value2 == 0)
		ft_putstr("Stop: division by zero");
	else if (op_index == 4 && value2 == 0)
		ft_putstr("Stop: modulo by zero");
	else
		ft_putnbr(op[op_index](value1, value2));
	ft_putstr("\n");
}
