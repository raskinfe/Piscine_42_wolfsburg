/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dessekinfemichaelalemu <dessekinfemicha    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 11:28:29 by dessekinfem       #+#    #+#             */
/*   Updated: 2022/09/17 12:35:17 by dessekinfem      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
	while (i < y)
	{
		j = 0;
		while (j < x)
		{
			if (is_topleftcorner(i, j) || is_bottomleftcorner(i, j, y))
				ft_putchar('A');
			else if (is_bottomrightcorner(i, j, x, y))
				ft_putchar('C');
			else if (is_toprightcorner(i, j, x))
				ft_putchar('C');
			else if ((i > 0 && i < y - 1) && (j > 0 && j < x - 1))
				ft_putchar(32);
			else
				ft_putchar('B');
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}
