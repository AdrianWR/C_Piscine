/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroque <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/29 16:15:10 by aroque            #+#    #+#             */
/*   Updated: 2019/12/02 16:21:04 by aroque           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_alpha(char *str)
{
	if (*str >= 'a' && *str <= 'z')
	{
		return (1);
	}
	else if (*str >= 'A' && *str <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

void	ft_strupcase(char *str)
{
	if (*str >= 'a' && *str <= 'z')
	{
		*str = *str - 'a' + 'A';
	}
}

void	ft_strlowcase(char *str)
{
	if (*str >= 'A' && *str <= 'Z')
	{
		*str = *str - 'A' + 'a';
	}
}

int		ft_str_is_numeric(char *str)
{
	if (!(*str >= '0' && *str <= '9'))
	{
		return (0);
	}
	return (1);
}

char	*ft_strcapitalize(char *str)
{
	char	*ptr;
	int		trigger;

	trigger = 0;
	ptr = str;
	while (*str)
	{
		if (ft_str_is_alpha(str) && trigger == 0)
		{
			ft_strupcase(str);
			trigger = 1;
		}
		else if (ft_str_is_alpha(str) || ft_str_is_numeric(str))
		{
			ft_strlowcase(str);
			trigger = 1;
		}
		else
		{
			trigger = 0;
		}
		str++;
	}
	return (ptr);
}
