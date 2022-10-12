/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_elimination.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: treeps <treeps@student.42wolfburg.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 11:14:07 by treeps            #+#    #+#             */
/*   Updated: 2022/09/25 11:14:07 by treeps           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "headers.h"
#include <stdlib.h>
#include <stdio.h>

int	g_forbidden_xpositions[4][4];
int	g_forbidden_ypositions[4][4];
int	g_k = 0;

void	ft_setvalues(int x, int y, int **output, int val)
{
	output[x][y] = val;
	g_forbidden_ypositions[val][g_k] = y;
	g_forbidden_xpositions[val][g_k] = x;
	g_k++;
}

void	ft_checkand_fill(int x, int **output, int **input, int val)
{
	int	**positions;
	int	y;

	positions = ft_get_possible_positions(output, val);
	y = -1;
	while (++y < 4)
	{
		if (positions[x][y])
		{
			if (!ft_in_array(x, g_forbidden_xpositions, val)
				&& !ft_in_array(y, g_forbidden_ypositions, val))
			{
				if ((val - input[x][y]) == val / 2 && output[x][y] == 0)
					ft_setvalues(x, y, output, val);
				else if ((val - input[x][y]) == val - 1 && output[x][y] == 0)
					ft_setvalues(x, y, output, val);
				else if ((val - input[x][y]) < 0
					&& x == val - 1 && output[x][y] == 0)
					ft_setvalues(x, y, output, val);
				else if ((val - input[x][y]) >= 2
					&& x == input[x][y] && output[x][y] == 0)
					ft_setvalues(x, y, output, val);
			}
		}
	}
}

void	ft_eliminate_position(int **input, int **output, int val)
{
	int	x;

	x = 0;
	while (x < 4)
	{
		ft_checkand_fill(x, output, input, val);
		x++;
	}
}

void	ft_fill_possible_positions(int **output, int **input, int len)
{
	if (len == 0)
		return ;
	ft_eliminate_position(input, output, len);
	return (ft_fill_possible_positions(output, input, len - 1));
}
