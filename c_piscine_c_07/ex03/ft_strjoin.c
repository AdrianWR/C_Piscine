/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroque <aroque@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/30 12:09:53 by aroque            #+#    #+#             */
/*   Updated: 2019/12/31 01:39:06 by aroque           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

/*
 * Get string length.
 */
int     ft_strlen(char *str)
{
    int i;

    i = 0;
    while (str[i])
        i++;
    return (i);
}

/*
 * Helper function to acquire return length
 * prior to memory allocation.
 */
int     get_len(int size, char **strs, char *sep)
{
    int i;
    int len;
    
    i = 0;
    len = 0;
    while (i < size)
        len += ft_strlen(strs[i++]);
    len +=  ft_strlen(sep) * (size - 1);
    return (len);
}

/*
 * Join an array of strings as only one string concatenated.
 * It's possible to insert a string separator in the last argument.
 * It's required to input the number of strings
 * to be joined in the first argument.
 */
char    *ft_strjoin(int size, char **strs, char *sep)
{
    int i;
    int j;
    int k;
    char *result;

    if (!size)
        return (NULL);
    j = 0;
    k = 0;
    result = malloc(get_len(size, strs, sep) * sizeof(char));
    while (k < size)
    {
        i = 0;
        while (strs[k][i])
            result[j++] = strs[k][i++];
        i = 0;
        while (sep[i] && k < size - 1)
            result[j++] = sep[i++];        
        k++;
    }
    return (result);
}

