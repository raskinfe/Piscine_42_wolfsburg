/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tail.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dessekinfemichaelalemu <dessekinfemicha    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 10:40:21 by dessekinfem       #+#    #+#             */
/*   Updated: 2022/10/04 12:43:24 by dessekinfem      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>

#define MAXSIZE 10000

int		ft_strcmp(char *s1, char *s2);
int		ft_strlen(char *str);
int		ft_atoi(char *str);
void	ft_putstr(char *str, int n);
void	ft_print_error(char *prog, char *fname, int size1, int size2);

void	ft_copy_line(int fd, int nb, int flag, char *fname)
{
	char	*str;
	int		n;

	str = (char *)malloc(MAXSIZE);
	n = read(fd, str, MAXSIZE);
	if (n == -1)
	{
		ft_putstr("Error: can't read file.\n", 26);
		exit(1);
	}
	n = ft_strlen(str) - nb;
	if (flag)
	{
		ft_putstr("==> ", 4);
		ft_putstr(fname, ft_strlen(fname));
		ft_putstr(" <==\n", 5);
	}
	while (n < ft_strlen(str))
	{
		write(1, &str[n], 1);
		n++;
	}
	free(str);
}

void	ft_handle_options(int count, char **strs)
{
	int	fd;
	int	i;
	int	flag;

	i = 2;
	flag = 0;
	while (++i < count)
	{
		fd = open(strs[i], O_RDONLY, 0);
		if (fd == -1)
		{
			ft_print_error(strs[0], strs[i],
				ft_strlen(strs[0]), ft_strlen(strs[i]));
			return ;
		}
		if (count > 4)
			flag = 1;
		ft_copy_line(fd, ft_atoi(strs[2]), flag, strs[i]);
		close(fd);
	}
}

void	ft_tail(int count, char **strs)
{
	if (count < 3)
		return ;
	if (ft_strcmp(strs[1], "-c") == 0)
	{
		if (ft_atoi(strs[2]) >= 0)
			ft_handle_options(count, strs);
		else
		{
			ft_putstr(strs[0], ft_strlen(strs[0]));
			ft_putstr(": illegal offset -- ", 20);
			ft_putstr(strs[2], ft_strlen(strs[2]));
			return ;
		}
	}
}

int	main(int argc, char **argv)
{
	ft_tail(argc, argv);
	return (0);
}
