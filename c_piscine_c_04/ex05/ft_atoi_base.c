/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroque <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/06 16:05:53 by aroque            #+#    #+#             */
/*   Updated: 2019/12/09 12:23:36 by aroque           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

char			*base_is_valid(char *b)
{
	char *checker;
	char *first;

	first = b;
	checker = b;
	if (ft_strlen(checker) < 2)
	{
		return (0);
	}
	while (*checker)
	{
		b = checker + 1;
		while (*b)
		{
			if (*b == '+' || *b == '-' || *b == ' ' || *checker == *b)
			{
				return (0);
			}
			b++;
		}
		checker++;
	}
	return (first);
}

int				index_base(char digit, char *base)
{
	unsigned int i;

	i = 0;
	while (i < ft_strlen(base))
	{
		if (digit == base[i])
		{
			return (i);
		}
		i++;
	}
	return (-1);
}

int				atoi_signal(char *str, char *base)
{
	int signal;

	signal = 0;
	while (*str == ' ' || *str == '\t' || *str == '\n')
	{
		str++;
	}
	while (*str == '\v' || *str == '\f' || *str == '\r')
	{
		str++;
	}
	while (*str == '+' || *str == '-')
	{
		*str == '-' ? signal++ : 0;
		str++;
	}
	while (index_base(*str, base) < 0)
	{
		return (0);
	}
	signal = (signal % 2) * -1;
	signal ? signal : signal++;
	return (signal);
}

int				ft_atoi_base(char *str, char *base)
{
	int				n;
	int				signal;
	unsigned int	i;
	unsigned int	base_len;
	unsigned int	str_len;

	i = 0;
	n = 0;
	base_len = ft_strlen(base);
	str_len = ft_strlen(str);
	signal = atoi_signal(str, base);
	if (base_is_valid(base))
	{
		while (i < str_len)
		{
			if (index_base(str[i], base) >= 0)
			{
				n = n * base_len + index_base(str[i], base);
			}
			i++;
		}
	}
	return (n * signal);
}
