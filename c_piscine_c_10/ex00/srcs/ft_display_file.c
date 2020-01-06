/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroque <aroque@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/02 00:09:10 by aroque            #+#    #+#             */
/*   Updated: 2020/01/03 11:23:04 by aroque           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>
#define BUF_SIZE 16384

void	ft_putstr(char *str)
{
	if (*str)
	{
		write(1, str, 1);
		return ft_putstr(str + 1);
	}
}

void	ft_display_file(char *file)
{
	int r;
	int fd;
	char content[BUF_SIZE + 1];
	
	fd = open(file, O_RDONLY);
	if (fd < 0)
		write(1, "Cannot read file.\n", 18);
	else
	{
		while ((r = read(fd, content, BUF_SIZE)))
		{
			content[r] = '\0';
			ft_putstr(content);
		}
	}
	close (fd);
}

int		main(int argc, char *argv[])
{
	if (argc < 2)
		write(1, "File name missing\n", 18);
	else if (argc > 2)
		write(1, "Too many arguments\n", 19);
	else
		ft_display_file(argv[1]);
}
