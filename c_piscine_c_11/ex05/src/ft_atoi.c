/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroque <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/05 10:25:38 by aroque            #+#    #+#             */
/*   Updated: 2020/01/17 09:57:43 by aroque           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 *	Check if a char is ASCII space, tabulation, carriage return
 *  or another space character as defined in isspace(3).
 */
int	ft_isspace(char str)
{
	if (str == 0x20 || (str >= 0x09 && str <= 0x0d))
		return (1);
	else
		return (0);
}

/*
 * Converts a string of characters to integer. An arbitrary amount
 * of white spaces can be added at string start, followed by any
 * amount of '+' or '-' signals. An even number of '-' cancels each
 * other. The conversion is then made while the following chars are
 * numeric, stopping at any other char identified. If no numeric char
 * os identified, the function returns 0 (zero).
 */
int	ft_atoi(char *str)
{
	int n;
	int signal;

	n = 0;
	signal = 1;
	while (ft_isspace(*str))
		str++;
	while (*str == '+' || *str == '-')
		if (*str++ == '-')
			signal *= -1;
	while (*str >= '0' && *str <= '9')
		n = n * 10 + (*str++ - '0');
	return (n * signal);
}
