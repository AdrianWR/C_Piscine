/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stock_str.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroque <aroque@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/31 11:28:09 by aroque            #+#    #+#             */
/*   Updated: 2019/12/31 12:55:20 by aroque           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_STOCK_STR_H
# define FT_STOCK_STR_H

struct  s_stock_str
{
    int size;
    char *str;
    char *copy;
};

typedef struct s_stock_str t_stock_str;

struct  s_stock_str *ft_strs_to_tab(int ac, char **av);
void    ft_show_tab(struct s_stock_str *par);

#endif
