/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   helpers2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dessekinfemichaelalemu <dessekinfemicha    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 14:30:11 by dessekinfem       #+#    #+#             */
/*   Updated: 2022/09/25 20:15:08 by dessekinfem      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int	ft_check_possible_position(int **positions)
{
	int	x;
	int	y;
	int	check;
	int	index;

	x = 0;
	check = 0;
	index = 0;
	while (x < 4)
	{
		y = 0;
		while (y < 4)
		{
			if (positions[x][y] == 1)
			{
				check += 1;
				index = 4 * x + y;
			}
			y++;
		}
		x++;
	}
	if (check == 1)
		return (index);
	return (0);
}

void	ft_putchar(int a)
{
	char	c;

	c = a + '0';
	write(1, &c, 1);
}

int	**ft_init_arr(void)
{
	int	**arr;
	int	x;
	int	y;

	x = 0;
	arr = (int **)malloc(64);
	while (x < 4)
	{
		arr[x] = (int *)malloc(4);
		x++;
	}
	x = 0;
	while (x < 4)
	{
		y = 0;
		while (y < 4)
			arr[x][y++] = 1;
		x++;
	}
	return (arr);
}

int	**ft_get_possible_positions(int **output, int val)
{
	int	**positions;
	int	x;
	int	y;
	int	temp_x;
	int	temp_y;

	positions = ft_init_arr();
	x = -1;
	while (++x < 4)
	{
		y = -1;
		while (++y < 4)
		{
			if (output[x][y] == val)
			{
				temp_y = 0;
				while (temp_y < 4)
					positions[x][temp_y++] = 0;
				temp_x = 0;
				while (temp_x < 4)
					positions[temp_x++][y] = 0;
			}
		}
	}
	return (positions);
}
