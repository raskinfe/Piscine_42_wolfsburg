/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dessekinfemichaelalemu <dessekinfemicha    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 15:11:43 by dessekinfem       #+#    #+#             */
/*   Updated: 2022/09/21 15:19:51 by dessekinfem      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	temp;

	temp = 1;
	if (power < 0)
		return (0);
	while (power)
	{
		temp *= nb;
		power --;
	}
	return (temp);
}

// int main()
// {
// 	printf("%d\n", ft_iterative_power(10, 3));
// }