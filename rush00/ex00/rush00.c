/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dessekinfemichaelalemu <dessekinfemicha    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 08:32:55 by dessekinfem       #+#    #+#             */
/*   Updated: 2022/09/17 20:32:34 by dessekinfem      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

int	is_corner(int i, int j, int x, int y)
{
	if (i == 0 && j == 0)
		return (1);
	else if (i == 0 && j == x - 1)
		return (1);
	else if (i == y - 1 && j == 0)
		return (1);
	else if (i == y - 1 && j == x - 1)
		return (1);
	return (0);
}

void	ft_handle_printing(int x, int y)
{
	int	i;
	int	j;

	i = 0;
	while (i < y)
	{
		j = 0;
		while (j < x)
		{
			if (is_corner(i, j, x, y))
				ft_putchar('o');
			else if (i == 0 || i == y - 1)
				ft_putchar('-');
			else if ((j == 0 || j == x - 1) && (i > 0 && i < y - 1))
				ft_putchar('|');
			else
				ft_putchar(32);
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}

void	rush(int x, int y)
{
	if (x < 0 || y < 0)
	{
		write(1, "Width and height should be a positive value", 43);
		ft_putchar('\n');
	}
	else
		ft_handle_printing(x, y);
}
