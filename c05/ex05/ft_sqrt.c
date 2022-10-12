/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dessekinfemichaelalemu <dessekinfemicha    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 16:04:20 by dessekinfem       #+#    #+#             */
/*   Updated: 2022/09/22 04:59:05 by dessekinfem      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <time.h>

int	ft_sqrt(int nb)
{
	long	i;

	i = 2;
	if (nb < 0)
		return (0);
	if (nb == 1)
		return (1);
	while ((i * i) <= nb)
	{
		if (i * i == nb)
			return (i);
		i++;
	}
	return (0);
}

// int main()
// {
// 	clock_t start_t, end_t;
// 	double total_t;

// 	start_t = clock(); 
// 	printf("%d\n", ft_sqrt(-2147483648));
// 	printf("%d\n", ft_sqrt(0));
// 	printf("%d\n", ft_sqrt(2147483647));
// 	printf("%d\n", ft_sqrt(2147483647));
// 	printf("%d\n", ft_sqrt(1640045925));
// 	printf("%d\n", ft_sqrt(2147395600));
// 	printf("%d\n", ft_sqrt(2147483646));
// 	printf("%d\n", ft_sqrt(279023616));
// 	printf("%d\n", ft_sqrt(1879643075));
// 	printf("%d\n", ft_sqrt(145347136));
// 	printf("%d\n", ft_sqrt(875934075));
// 	printf("%d\n", ft_sqrt(727057296));
// 	printf("%d\n", ft_sqrt(1917075284));
// 	printf("%d\n", ft_sqrt(1080568384));
// 	printf("%d\n", ft_sqrt(632911142));
// 	printf("%d\n", ft_sqrt(1609694641));
// 	printf("%d\n", ft_sqrt(1854837743));
// 	int i = -1;
// 	while (i < 100)
// 	{
// 		printf("sqrt(%d) -> %d\n", i, ft_sqrt(i));
// 		i++;
// 	}
// 	end_t = clock();
// 	total_t = (double)(end_t - start_t)/ CLOCKS_PER_SEC;
// 	printf("total time in seconds %f\n", total_t);
// }