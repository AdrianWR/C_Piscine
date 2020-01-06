/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_file.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroque <aroque@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/02 00:09:10 by aroque            #+#    #+#             */
/*   Updated: 2020/01/02 12:30:01 by aroque           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

void	ft_display_file(char *file)
{
	int fd;
	char content;
	
	fd = open(file, O_RDONLY);
	if (fd < 0)
		write(1, "Cannot read file.\n", 18);
	else
	{
		while (read(fd, &content, 1))
			write(1, &content, 1);
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
