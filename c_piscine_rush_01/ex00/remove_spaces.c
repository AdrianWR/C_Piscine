/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   remove_spaces.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroque <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/01 19:23:45 by aroque            #+#    #+#             */
/*   Updated: 2019/12/01 19:36:32 by aroque           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void removeSpaces(char *str)
{
    int count = 0;
	int i = 0;	

	while (str[i]) 
	{
    	if (str[i] != ' ')
		{
			str[count++] = str[i];
		}
		i++;
	}
    str[count] = '\0';
}

int	main(int argc, char *argv[])
{
	printf("%s\n", argv[1]);
	removeSpaces(argv[1]);
	printf("%s\n", argv[1]);
	return (0);
}
