/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_4inarow.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: treeps <treeps@student.42wolfburg.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 15:54:28 by treeps            #+#    #+#             */
/*   Updated: 2022/09/25 12:42:54 by treeps           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "headers.h"

int	g_n;
int	g_m;

/// @brief handles 4 or 1 from top view
/// @param pos 
/// @param val 
/// @param g_output 
void	ft_top_bottom(int pos, int val, int **g_output)
{
	if (val == 4)
	{
		g_n = 0;
		while (g_n < 4)
		{
			g_output[g_n][pos] = g_n + 1;
			g_n++;
		}
	}
	else if (val == 1)
		g_output[0][pos] = 4;
}

/// @brief handles 4 or 1 from bottom view
/// @param pos 
/// @param val 
/// @param g_output 
void	ft_bottom_top(int pos, int val, int **g_output)
{
	if (val == 4)
	{
		g_n = 3;
		while (g_n >= 0)
		{
			g_output[g_n][pos] = g_n + 1;
			g_n--;
		}
	}
	else if (val == 1)
		g_output[3][pos] = 4;
}

/// @brief handles 4 or 1 from left view
/// @param pos 
/// @param val 
/// @param g_output 
void	ft_left_right(int pos, int val, int **g_output)
{
	if (val == 4)
	{
		g_m = 0;
		while (g_m < 4)
		{
			g_output[pos][g_m] = g_m + 1;
			g_m++;
		}
	}
	else if (val == 1)
		g_output[pos][0] = 4;
}

/// @brief handles 4 or 1 from right view
/// @param pos 
/// @param val 
/// @param g_output 
void	ft_right_left(int pos, int val, int **g_output)
{
	if (val == 4)
	{
		g_m = 3;
		while (g_m >= 0)
		{
			g_output[pos][g_m] = g_m + 1;
			g_m--;
		}
	}
	else if (val == 1)
		g_output[pos][3] = 4;
}
