/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroque <aroque@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/28 16:02:13 by aroque            #+#    #+#             */
/*   Updated: 2019/12/28 16:12:57 by aroque           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int     ft_strlen(char *str)
{
    int i;

    i = 0;
    while (str[i])
    {
        i++;
    }
    return (i);
}

char    *ft_strdup(char *src)
{
    int i;
    char *dest;

    i = 0;
    dest = malloc(ft_strlen(src) * sizeof(char));
    while (src[i])
    {
        dest[i] = src[i];
        i++;
    }
    return (dest);
}
