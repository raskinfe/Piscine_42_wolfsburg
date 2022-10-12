/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_solve.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dessekinfemichaelalemu <dessekinfemicha    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 15:14:32 by treeps            #+#    #+#             */
/*   Updated: 2022/09/25 20:10:07 by dessekinfem      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "headers.h"

int	g_output[4][4];

void	ft_init_output(void)
{
	int	x;
	int	y;

	x = 0;
	while (x < 4)
	{
		y = 0;
		while (y < 4)
			g_output[x][y++] = 0;
		x++;
	}
}

int	**ft_init_array(int multarr[4][4])
{
	int	**arr;
	int	i;

	arr = (int **)malloc(16 * 4);
	i = 0;
	while (i < 4)
	{
		arr[i] = multarr[i];
		i++;
	}
	return (arr);
}

int	**g_op;

void	ft_first_step(int **input)
{
	int	view;
	int	pos;

	view = 0;
	g_op = ft_init_array(g_output);
	while (view < 4)
	{
		pos = 0;
		while (pos < 4)
		{
			if (view == 0)
				ft_top_bottom(pos, input[view][pos], g_op);
			else if (view == 1)
				ft_bottom_top(pos, input[view][pos], g_op);
			else if (view == 2)
				ft_left_right(pos, input[view][pos], g_op);
			else if (view == 3)
				ft_right_left(pos, input[view][pos], g_op);
			pos++;
		}
		view++;
	}
}

int	**ft_solve4(int input[4][4])
{
	int	**inp;
	int	**positions;
	int	i;
	int	index;

	inp = ft_init_array(input);
	g_op = ft_init_array(g_output);
	ft_init_output();
	ft_first_step(inp);
	ft_fill_possible_positions(g_op, inp, 4);
	i = 0;
	while (++i <= 4)
	{
		positions = ft_get_possible_positions(g_op, i);
		index = ft_check_possible_position(positions);
		if (index)
			g_op[index / 4][index % 4] = i;
	}
	while (1)
	{
		if (!(ft_check_empty_row(g_op))
			&& !(ft_check_empty_column(g_op)))
			break ;
	}	
	return (g_op);
}

//		4	3	2	1	
//	4	1	2	3	4	1
//	3	2	0	0	0	2
//	2	3	0	0	0	2
//	1	4	0	0	0	2
//		1	2	2	2

//		4	3	2	1	
//	4	1	2	3	4	1
//	3	2	4	4	0	2
//	2	3	4	4	0	2
//	1	4	0	0	0	2
//		1	2	2	2