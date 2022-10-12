/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dessekinfemichaelalemu <dessekinfemicha    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 09:00:07 by dessekinfem       #+#    #+#             */
/*   Updated: 2022/10/06 14:52:06 by dessekinfem      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_ascending_sorted(int *tab, int lenght, int (*f)(int, int))
{
	int		i;

	i = 0;
	while (i < lenght - 1)
	{
		if (f(tab[i], tab[i + 1]) > 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_is_descending_sorted(int *tab, int lenght, int (*f)(int, int))
{
	int		i;

	i = 0;
	while (i < lenght - 1)
	{
		if (f(tab[i], tab[i + 1]) < 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_is_sort(int *tab, int lenght, int (*f)(int, int))
{
	if (ft_is_ascending_sorted(tab, lenght, f)
		||ft_is_descending_sorted(tab, lenght, f))
		return (1);
	else
		return (0);
}

// int f(int a, int b)
// {
// 	return (a - b);
// }

// int main(void)
// {
// 	int arr[] = {1, 2, 3,4, 5, 6, 5,6,6,6,7};
// 	int x;
// 	x = ft_is_sort(arr, 6, &f);
// 	printf("%d\n", x);
// }