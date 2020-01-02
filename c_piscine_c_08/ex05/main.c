/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroque <aroque@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/31 11:27:32 by aroque            #+#    #+#             */
/*   Updated: 2019/12/31 13:40:46 by aroque           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "ft_stock_str.h"

int     main(int argc, char *argv[])
{
    ft_show_tab(ft_strs_to_tab(argc - 1, &argv[1]));
}
