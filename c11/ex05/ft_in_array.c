/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_in_array.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dessekinfemichaelalemu <dessekinfemicha    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 09:29:30 by dessekinfem       #+#    #+#             */
/*   Updated: 2022/10/06 15:25:50 by dessekinfem      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_in_array(char c, char arr[5][1])
{
	int	i;

	i = 0;
	while (i < 5)
	{
		if (c == arr[i][0])
			return (i);
		i++;
	}
	return (-1);
}
