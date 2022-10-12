/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dessekinfemichaelalemu <dessekinfemicha    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 16:21:03 by dessekinfem       #+#    #+#             */
/*   Updated: 2022/09/22 05:47:05 by dessekinfem      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <time.h>

int	ft_is_prime(int nb)
{
	long	i;

	if (nb <= 1)
		return (0);
	if (nb <= 3)
		return (1);
	if (nb % 2 == 0 || nb % 3 == 0)
		return (0);
	i = 5;
	while (i * i <= nb)
	{
		if (nb % i == 0 || nb % (i + 2) == 0)
			return (0);
		if ((nb % i) * i > nb)
			return (1);
		i += 6;
	}
	return (1);
}

// int main()
// {
// 	clock_t start_t, end_t;
// 	double total_t;
// 	int i = -1;
// 	start_t = clock();
// 	while (i <= 10000000)
// 	{
// 		printf("%d is (%d)\n", i, ft_is_prime(i));
// 		i++;
// 	}

// 	printf("%d\n", ft_is_prime(215555));
// 	end_t = clock();
// 	printf("End of the big loop, end_t = %ld\n", end_t);

// 	total_t = (double)(end_t - start_t) / CLOCKS_PER_SEC;
// 	printf("Total time taken by CPU: %f\n", total_t  );
// }