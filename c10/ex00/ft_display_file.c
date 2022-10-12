/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dessekinfemichaelalemu <dessekinfemicha    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 16:59:49 by dessekinfem       #+#    #+#             */
/*   Updated: 2022/10/03 19:02:14 by dessekinfem      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>

#define MAXSIZE 1000
#define ERR_MSG "Cannot read file.\n"

void	ft_putstr(char *c, int n)
{
	write(1, c, n);
}

void	ft_display_file(char *str)
{
	int		fd;
	char	buffer[MAXSIZE];
	int		n;

	n = MAXSIZE;
	fd = open(str, O_RDONLY, 0);
	if (fd == -1)
	{
		ft_putstr(ERR_MSG, 19);
		return ;
	}
	while (n)
	{
		n = read(fd, buffer, MAXSIZE);
		if (n == -1)
		{
			ft_putstr(ERR_MSG, 19);
			return ;
		}
		ft_putstr(buffer, n);
	}
	close(fd);
}

int	main(int argc, char **argv)
{
	if (argc == 1)
		ft_putstr("File name missing.\n", 18);
	else if (argc > 2)
		ft_putstr("Too many arguments.\n", 21);
	else
	{
		ft_display_file(argv[1]);
	}
	return (0);
}
