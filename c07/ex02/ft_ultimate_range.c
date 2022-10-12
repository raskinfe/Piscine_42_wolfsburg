/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dessekinfemichaelalemu <dessekinfemicha    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 16:43:02 by dessekinfem       #+#    #+#             */
/*   Updated: 2022/09/26 16:36:48 by dessekinfem      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	i = 0;
	*range = (int *)malloc((max - min) * 4);
	if (!(*range))
		return (-1);
	while (min < max)
	{
		*((*range) + i) = min;
		min++;
		i++;
	}
	return (i);
}

// int main()
// {
// 	int *arr;
// 	int size;
// 	size = ft_ultimate_range(&arr, 10, 2147483647);
// 	int i = 0;
// 	printf("%d\n", (arr == NULL));
// 	while (i < size)
// 	{
// 		printf("(%d) -> %d\n", i , arr[i]);
// 		i++;
// 	}
// }