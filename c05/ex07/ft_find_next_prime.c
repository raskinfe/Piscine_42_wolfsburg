/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dessekinfemichaelalemu <dessekinfemicha    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 16:31:09 by dessekinfem       #+#    #+#             */
/*   Updated: 2022/09/22 05:46:45 by dessekinfem      ###   ########.fr       */
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

int	ft_find_next_prime(int nb)
{
	if (ft_is_prime(nb))
		return (nb);
	return (ft_find_next_prime(nb + 1));
}

// int main()
// {
// 	clock_t start_t, end_t;
// 	double total_t;

// 	start_t = clock();
// 	int i = -1;
// 	while (i < 100)
// 	{
// 		printf("the next prime to (%d) = %d\n", i, ft_find_next_prime(i));
// 		i++;
// 	}
// 	printf("%d\n", ft_find_next_prime(2147483645));
// 	end_t = clock();
// 	total_t = (double)(end_t - start_t)/CLOCKS_PER_SEC;
// 	printf("total time taken by cpu %f\n", total_t);	
// }