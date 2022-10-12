/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_input_handling.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dessekinfemichaelalemu <dessekinfemicha    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 15:02:16 by treeps            #+#    #+#             */
/*   Updated: 2022/09/25 05:41:16 by dessekinfem      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

/// @brief validates and parses the input
/// @param str 
/// @param input 
/// @return 1 or 0 depending on wether or not the input is valid

int	ft_format_clue(char *str, int input[4][4])
{
	int	i;

	i = 0;
	while (str[i] && i < 32)
	{
		if ((str[i] >= '1' && str[i] <= '4')
			&& (str[i + 1] == ' ' || !(str[i + 1])))
			input[(i / 2) / 4][(i / 2) % 4] = str[i] - '0';
		else
			return (0);
		i += 2;
	}
	if (str[i - 1])
		return (0);
	return (1);
}
