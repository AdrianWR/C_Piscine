/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroque <aroque@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/10 11:42:54 by aroque            #+#    #+#             */
/*   Updated: 2020/01/10 12:16:16 by aroque           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(char *str);
void	ft_putnbr(int nb);
void	ft_foreach(int *tab, int length, void (*f)(int));

int	main(int argc, char *argv[])
{
	int k[argc];
	int i;

	i = 0;
	while (i < argc - 1)
	{
		k[i] = ft_atoi(argv[i + 1]);
		i++;
	}
	ft_foreach(k, i, &ft_putnbr);
}
