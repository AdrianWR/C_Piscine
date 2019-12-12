/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroque <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/04 15:59:32 by aroque            #+#    #+#             */
/*   Updated: 2019/12/05 17:06:33 by aroque           ###   ########.fr       */
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

char			*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int len;
	unsigned int i;

	i = 0;
	len = ft_strlen(dest);
	while (i < ft_strlen(src) && i < nb)
	{
		*(dest + len + i) = *(src + i);
		i++;
	}
	*(dest + len + i) = '\0';
	return (dest);
}
