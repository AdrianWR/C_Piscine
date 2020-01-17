/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroque <aroque@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/16 22:23:45 by aroque            #+#    #+#             */
/*   Updated: 2020/01/16 22:41:08 by aroque           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_count_if(char **tab, int length, int (*f)(char*))
{

	if (!length)
		return (0);
	else if (f(*tab))
		return (ft_count_if(tab + 1, --length, f) + 1);
	else 
		return (ft_count_if(tab + 1, --length, f));
}
