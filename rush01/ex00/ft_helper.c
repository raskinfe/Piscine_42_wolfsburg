/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_helper.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: treeps <treeps@student.42wolfburg.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 16:49:32 by treeps            #+#    #+#             */
/*   Updated: 2022/09/25 15:48:52 by treeps           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "headers.h"

int	g_x = 0;
int	g_y = 0;
int	g_i;
int	g_count[2];
int	g_column[4];

int	ft_return(void)
{
	if (g_count[1] < 5)
		return (1);
	return (0);
}

int	ft_missing_element(int arr[])
{
	int	j;

	g_i = 0;
	j = 0;
	while (g_i < 4)
	{
		j += arr[g_i];
		g_i++;
	}
	return (10 - j);
}

int	ft_check_empty_row(int **output)
{
	g_x = 0;
	g_count[1] = 5;
	while (g_x < 4)
	{
		g_count[0] = 0;
		g_y = 0;
		while (g_y < 4)
		{
			if (output[g_x][g_y] == 0)
			{
				g_count[0] += 1;
				g_count[1] = g_y;
			}
			g_y++;
		}
		if (g_count[0] == 1)
		{
			output[g_x][g_count[1]] = ft_missing_element(output[g_x]);
			return (ft_return());
		}
		g_x++;
	}
	return (0);
}

int	ft_check_empty_column(int **output)
{
	g_y = -1;
	g_count[1] = 5;
	while (++g_y < 4)
	{
		g_count[0] = 0;
		g_x = -1;
		while (++g_x < 4)
		{
			if (output[g_x][g_y] == 0)
			{
				g_count[0] += 1;
				g_count[1] = g_x;
			}
		}
		if (g_count[0] == 1)
		{
			g_i = -1;
			while (++g_i < 4)
				g_column[g_i] = output[g_i][g_y];
			output[g_count[1]][g_y] = ft_missing_element(g_column);
			return (ft_return());
		}
	}
	return (0);
}

int	ft_in_array(int pos, int arr[4][4], int val)
{
	int	i;

	i = 0;
	while (i < 4)
	{
		if (pos == arr[val][i])
			return (1);
		i++;
	}
	return (0);
}
