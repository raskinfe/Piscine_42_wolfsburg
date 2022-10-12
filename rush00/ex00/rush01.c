/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dessekinfemichaelalemu <dessekinfemicha    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 08:32:55 by dessekinfem       #+#    #+#             */
/*   Updated: 2022/09/17 20:40:19 by dessekinfem      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

int	is_topleftcorner(int i, int j)
{
	if (i == 0 && j == 0)
		return (1);
	return (0);
}

int	is_bottomleftcorner(int i, int j, int y)
{
	if (i == y - 1 && j == 0)
		return (1);
	return (0);
}

int	is_toprightcorner(int i, int j, int x)
{
	if (i == 0 && j == x - 1)
		return (1);
	return (0);
}

int	is_bottomrightcorner(int i, int j, int x, int y)
{
	if (y == 1 || x == 1)
		return (0);
	if (i == y - 1 && j == x - 1)
		return (1);
	return (0);
}

void	rush(int x, int y)
{
	int	i;
	int	j;

	i = 0;
	if (x < 0 || y < 0)
		write(1, "Width and height should be a positive value\n", 44);
	while (i < y && x > 0)
	{
		j = 0;
		while (j < x)
		{
			if (is_topleftcorner(i, j) || is_bottomrightcorner(i, j, x, y))
				ft_putchar('/');
			else if (is_bottomleftcorner(i, j, y) || is_toprightcorner(i, j, x))
				ft_putchar('\\');
			else if ((i > 0 && i < y - 1) && (j > 0 && j < x - 1))
				ft_putchar(32);
			else
				ft_putchar('*');
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}
