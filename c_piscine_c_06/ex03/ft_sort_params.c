/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroque <aroque@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/27 17:46:16 by aroque            #+#    #+#             */
/*   Updated: 2019/12/27 18:54:56 by aroque           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
    int i;

    i = 0;
    while (str[i])
    {
	write(1, &str[i], 1);
	i++;
    }
}

void    ft_swap(char **str1, char **str2)
{
    char *aux;

    aux = *str1;
    *str1 = *str2;
    *str2 = aux;
}

int	ft_strcmp(char *s1, char *s2)
{
    int i;

    i = 0;
    while (s1[i] && s1[i] == s2[i])
    {
	i++;
    }
    return (s1[i] - s2[i]);
}

int     main(int argc, char *argv[])
{
    int i;
    int j;

    i = 1;
    while (i < argc - 1)
    {
        j = i + 1;
        while (j < argc)
        {
            if (ft_strcmp(argv[i], argv[j]) > 0)
            {
                ft_swap(&argv[i], &argv[j]);
            }
            j++;
        }
        i++;
    }
    i = 1;
    while (i < argc)
    {
        ft_putstr(argv[i]);
        ft_putstr("\n");
        i++;
    }
}
