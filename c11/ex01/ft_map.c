/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dessekinfemichaelalemu <dessekinfemicha    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 13:03:59 by dessekinfem       #+#    #+#             */
/*   Updated: 2022/10/06 08:16:52 by dessekinfem      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int	*arr;
	int	i;

	arr = (int *)malloc(length * 4);
	if (!arr)
		return (NULL);
	i = 0;
	while (i < length)
	{
		arr[i] = f(tab[i]);
		i++;
	}
	return (arr);
}

int f(int i)
{
	return (i * 2);
}

int main(void)
{
	int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
	int *arr1;
	arr1 = ft_map(arr, 9, &f);
	int i = 0;
	while (i < 9)
	{
		printf("arr[%d] = = %d\n", i, arr1[i]);
		i++;
	}
}