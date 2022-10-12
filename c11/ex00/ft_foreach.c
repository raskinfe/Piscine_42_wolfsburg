/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dessekinfemichaelalemu <dessekinfemicha    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 12:54:08 by dessekinfem       #+#    #+#             */
/*   Updated: 2022/10/06 08:16:36 by dessekinfem      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_foreach(int *tab, int length, void (*f)(int))
{
	int	i;

	i = 0;
	while (i < length)
	{
		f(tab[i]);
		i++;
	}
}

void	ft_putnbr(int n)
{
	char	buffer[1000];
	int		index;

	index = 0;
	while (n)
	{
		buffer[index] = n % 10 + '0';
		n /= 10;
		index++;
	}
	while (index--)
		write(1, &buffer[index], 1);
	write(1, "\n", 1);
}

int main(void)
{
	int arr[] = { 1, 23, 43, 12, 45, 10};
	ft_foreach(arr, 6, &ft_putnbr);
	return (0);
}