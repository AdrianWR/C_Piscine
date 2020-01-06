/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cat.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroque <aroque@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/02 20:16:27 by aroque            #+#    #+#             */
/*   Updated: 2020/01/03 12:01:28 by aroque           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <libgen.h>
#include <string.h>
#include <fcntl.h>
#include <errno.h>
#include "ft.h"
#define BUF_SIZE 16384

/*
 * Display any errors detected by file management
 * functions. This function prints the error pattern
 * given by the system cat function.
 */
void	ft_display_error(char *arg)
{
	ft_putstr(basename(program));
	ft_putstr(": ");
	ft_putstr(arg);
	ft_putstr(": ");
	ft_putstr(strerror(errno));
	ft_putchar('\n');
}

/*
 * Set buffer size accordingly to stack size limit.
 * Even the file being larger than buffer size, the 
 * operation will be executed until it reaches EOF.
 * The file descript is passed ar argument whenever
 * it's required to read from standard input.
 */
void	ft_display_file(int fd, char *file)
{
	int r;
	char content[BUF_SIZE + 1];
	
	while ((r = read(fd, content, BUF_SIZE)))
	{
		if (r < 0)
		{
			ft_display_error(file);
			return ;
		}
		content[r] = '\0';
		ft_putstr(content);
	}
}

/*
 * At the very beginning, detect if no argument is passed
 * by command line, reading from stdin. The file descriptor
 * is declared here, as well as opening the file.
 */

void	ft_cat(char *str[])
{
	int fd;

	if (!(*(str + 1)))
		ft_display_file(0, *str);
	while (*(++str))
	{
		if (!ft_strcmp(*str, "-"))
			ft_display_file(0, *str);
		else if ((fd = open(*str, O_RDONLY)) < 0)
			ft_display_error(*str);
		else
		{
			ft_display_file(fd, *str);
			if (close(fd) < 0)
				ft_display_error(*str);
		}
	}
}

/*
 * The program variable is defined globally in ft.h
 * to be used in function ft_display_error. Don't do
 * this. Try to pass it as a parameter.
 */
int		main(int argc, char *argv[])
{
	(void) argc;
	program = argv[0];
	ft_cat(argv);
}
