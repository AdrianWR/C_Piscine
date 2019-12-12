/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroque <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/04 16:27:00 by aroque            #+#    #+#             */
/*   Updated: 2019/12/04 17:58:44 by aroque           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *str)
{
	unsigned int i;

	i = 0;
	while (*str)
	{
		str++;
		i++;
	}
	return (i);
}

int				ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;
	unsigned char	*p1;
	unsigned char	*p2;

	p1 = (unsigned char *)s1;
	p2 = (unsigned char *)s2;
	i = 0;
	while (*p1 && *p2 && *(p1 + i) == *(p2 + i) && i < n - 1)
	{
		i++;
	}
	return (*(p1 + i) - *(p2 + i));
}

char			*ft_strstr(char *str, char *to_find)
{
	unsigned int i;

	i = 0;
	if (!*to_find)
	{
		return (str);
	}
	while (*(str + i))
	{
		if (*(str + i) == *(to_find))
		{
			if (!ft_strncmp(str + i, to_find, ft_strlen(to_find)))
			{
				return (str + i);
			}
		}
		i++;
	}
	return (0);
}
