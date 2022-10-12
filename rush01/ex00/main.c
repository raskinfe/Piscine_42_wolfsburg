/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dessekinfemichaelalemu <dessekinfemicha    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 15:14:17 by treeps            #+#    #+#             */
/*   Updated: 2022/09/25 20:07:18 by dessekinfem      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include "headers.h"

int	main(int argc, char **argv)
{
	int	input[4][4];
	int	i;
	int	j;
	int	**output;

	if (argc != 2 || !ft_format_clue(argv[1], input))
	{
		write(1, "incorrect input\n", 16);
		return (0);
	}
	output = ft_solve4(input);
	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			ft_putchar(output[i][j]);
			write(1, " ", 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
	return (0);
}
