/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dessekinfemichaelalemu <dessekinfemicha    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 12:42:27 by dessekinfem       #+#    #+#             */
/*   Updated: 2022/09/26 16:33:53 by dessekinfem      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	*ptr;
	int	i;

	ptr = NULL;
	i = 0;
	if (min >= max)
		return (ptr);
	ptr = (int *)malloc((max - min) * 4);
	while (min < max)
	{
		*(ptr + i) = min;
		min++;
		i++;
	}
	return (ptr);
}

// int main()
// {
// 	int *arr;
// 	arr = ft_range(10, 214748364);
// 	int i = 0;
// 	// printf("%d\n", (arr == NULL));
// 	while (i < 1000000)
// 	{
// 		printf("(%d) -> %d\n", i ,arr[i]);
// 		i++;
// 	}
// }