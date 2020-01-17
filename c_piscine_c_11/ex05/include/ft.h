/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroque <aroque@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/17 10:24:28 by aroque            #+#    #+#             */
/*   Updated: 2020/01/17 13:12:35 by aroque           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H

int		add(int a, int b);
int		sub(int a, int b);
int		div(int a, int b);
int 	mult(int a, int b);
int 	mod(int a, int b);
int		ft_strlen(char *str);
int		ft_atoi(char *str);
int		ft_operation_index(char *operator);
void	ft_putstr(char *str);
void	ft_putnbr(int nb);
void	ft_do_operation(int value1, int value2, int op_index, int (*op[])(int, int));

#endif
