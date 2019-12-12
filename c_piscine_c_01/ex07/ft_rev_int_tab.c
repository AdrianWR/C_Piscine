/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroque <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/27 19:11:56 by aroque            #+#    #+#             */
/*   Updated: 2019/12/03 17:08:55 by aroque           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int *last;
	int swap;
	int count;

	count = 0;
	last = tab + size - 1;
	while (count < size / 2)
	{
		swap = *tab;
		*tab = *last;
		*last = swap;
		tab++;
		last--;
		count++;
	}
}
