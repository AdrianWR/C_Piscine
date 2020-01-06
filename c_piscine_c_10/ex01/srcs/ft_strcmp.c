/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroque <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/03 12:12:20 by aroque            #+#    #+#             */
/*   Updated: 2019/12/31 16:14:46 by aroque           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int     ft_strcmp(char *s1, char *s2)
{
    if (!(*s1) && !(*s2))
    {
        return (0);
    }
    else if (*s1 == *s2)
    {
        return (ft_strcmp(++s1, ++s2));
    }
    else
    {
        return (*s1 - *s2);
    }
}
