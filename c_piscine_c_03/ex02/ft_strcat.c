/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroque <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/04 09:53:34 by aroque            #+#    #+#             */
/*   Updated: 2019/12/04 16:01:13 by aroque           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (*str)
	{
		str++;
		i++;
	}
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int len;
	int i;

	i = 0;
	len = ft_strlen(dest);
	while (i < ft_strlen(src))
	{
		*(dest + len + i) = *(src + i);
		i++;
	}
	*(dest + len + i) = '\0';
	return (dest);
}
