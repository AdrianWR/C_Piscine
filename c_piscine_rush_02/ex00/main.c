/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroque <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/07 11:48:59 by aroque            #+#    #+#             */
/*   Updated: 2019/12/08 12:37:23 by aroque           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/types.h>
#include <sys/uio.h> 
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>
#include "hash_table.h"
#include "ft.h"

# define BUF_SIZE 40

int	main(int argc, char *argv[])
{
	//int fd;
	//int ret;
	//char dict[BUF_SIZE + 1];

	(void) argc;
	//dict  = malloc((BUF_SIZE + 2) * sizeof(char));
	//fd = open("dictionary", O_RDONLY);
	//ret  = read(fd, dict, BUF_SIZE);
	//dict[ret] = '\0';
	//ft_putstr(dict);
	

	s_ht *ht = ht_create();
    ht_set(ht, "0", "zero");
    ht_set(ht, "1", "one");
    ht_set(ht, "2", "two");
    ht_set(ht, "3", "three");
    ht_set(ht, "4", "four");
    ht_set(ht, "5", "five");
    ht_set(ht, "6", "six");
    ht_set(ht, "7", "seven");
    ht_set(ht, "8", "eight");
    ht_set(ht, "9", "nine");
    ht_set(ht, "10", "ten");
    ht_set(ht, "11", "eleven");
    ht_set(ht, "12", "twelve");
    ht_set(ht, "13", "thirteen");
    ht_set(ht, "14", "fourteen");
    ht_set(ht, "15", "fifteen");
    ht_set(ht, "16", "sixteen");
    ht_set(ht, "17", "seventeen");
    ht_set(ht, "18", "eighteen");
    ht_set(ht, "19", "nineteen");
    ht_set(ht, "20", "twenty");
    ht_set(ht, "30", "thirty");	
    ht_set(ht, "40", "forty");	
    ht_set(ht, "50", "fifty");	
    ht_set(ht, "60", "sixty");	
    ht_set(ht, "70", "seventy");	
    ht_set(ht, "80", "eighty");	
    ht_set(ht, "90", "ninety");	
    ht_set(ht, "100", "hundred");	
    ht_set(ht, "1000", "thousand");	
    ht_set(ht, "1000000", "million");	
    ht_set(ht, "1000000000", "billion");	
    ht_set(ht, "1000000000000", "trillion");	
    ht_set(ht, "1000000000000000", "quadrillion");	
    ht_set(ht, "1000000000000000000", "quintillion");	
    ht_set(ht, "1000000000000000000000", "sextillion");	
    ht_set(ht, "1000000000000000000000000", "septillion");	
    ht_set(ht, "1000000000000000000000000000", "octillion");	
    ht_set(ht, "1000000000000000000000000000000", "nonillion");	
    ht_set(ht, "1000000000000000000000000000000000", "decillion");	
    ht_set(ht, "1000000000000000000000000000000000000", "undecillion");	
	//ht_dump(ht);
	
	ft_long_number(argv[1], ht);
}
