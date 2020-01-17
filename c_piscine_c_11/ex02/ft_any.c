/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_any.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroque <aroque@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/16 21:58:56 by aroque            #+#    #+#             */
/*   Updated: 2020/01/16 22:18:30 by aroque           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 * First of all, checks if the function returns
 * something on the actual array element. Then,
 * proceeds to check if the next element exists,
 * making the same return test again. If nothing
 * passes, return zero.
 */

int	ft_any(char **tab, int (*f)(char*))
{
	if (f(*tab))
		return (1);
	else if (*(++tab))
		return (ft_any(tab, f));
	return (0);
}
