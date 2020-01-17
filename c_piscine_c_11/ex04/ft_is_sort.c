/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroque <aroque@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/16 22:44:45 by aroque            #+#    #+#             */
/*   Updated: 2020/01/16 23:03:28 by aroque           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	if (length <= 1)
		return (1);
	else if (f(*tab, *(tab + 1)) > 0)
		return (0);
	else
		return (ft_is_sort(tab + 1, length - 1, f));
}
