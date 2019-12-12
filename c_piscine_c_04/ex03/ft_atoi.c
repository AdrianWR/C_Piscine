/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroque <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/05 10:25:38 by aroque            #+#    #+#             */
/*   Updated: 2019/12/09 12:15:45 by aroque           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isspace(char str)
{
	if (str == ' ' || str == '\t' || str == '\n')
	{
		return (1);
	}
	else if (str == '\v' || str == '\f' || str == '\r')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

int	atoi_signal(char *str)
{
	int signal;

	signal = 0;
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
		{
			signal++;
		}
		str++;
	}
	while (*str < '0' || *str > '9')
	{
		return (0);
	}
	signal = (signal % 2) * -1;
	signal ? signal : signal++;
	return (signal);
}

int	ft_atoi(char *str)
{
	int n;
	int aux;
	int n_signal;
	int signal;

	n = 0;
	aux = -1;
	while (ft_isspace(*str))
	{
		str++;
	}
	signal = atoi_signal(str);
	while (*str == '+' || *str == '-')
	{
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		n = n * 10 + (*str - '0');
		str++;
	}
	n_signal = n * signal;
	return (n_signal);
}
