/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cat.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dessekinfemichaelalemu <dessekinfemicha    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 08:28:28 by dessekinfem       #+#    #+#             */
/*   Updated: 2022/10/04 10:10:31 by dessekinfem      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>
#include <errno.h>
#include <string.h>
#include <stdlib.h>
#include <libgen.h>

#define MAXSIZE 29800

void	ft_putstr(char *str, int n)
{
	write(1, str, n);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	ft_print_error(char *prog, char *fname, int size1, int size2)
{
	ft_putstr(prog, size1);
	ft_putstr(": ", 2);
	ft_putstr(basename(fname), size2);
	ft_putstr(": ", 2);
	ft_putstr(strerror(errno), 25);
	ft_putstr("\n", 1);
}

char	g_buffer[MAXSIZE];
int		g_n = 1;

void	ft_cat(int count, char **argv)
{
	int		fd;
	int		i;

	i = 0;
	while (++i < count)
	{
		fd = open(argv[i], O_RDONLY, 0);
		if (fd == -1)
		{
			ft_print_error(argv[0], argv[i], ft_strlen(argv[0]),
				ft_strlen(argv[i]));
			return ;
		}
		while (g_n)
		{
			g_n = read(fd, g_buffer, MAXSIZE);
			if (g_n == -1)
			{
				ft_putstr("Error: can't read file.\n", 26);
				return ;
			}
			ft_putstr(g_buffer, g_n);
		}
		close(fd);
	}
}

int	main(int argc, char **argv)
{
	ft_cat(argc, argv);
	return (0);
}
