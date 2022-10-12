/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dessekinfemichaelalemu <dessekinfemicha    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 15:28:44 by dessekinfem       #+#    #+#             */
/*   Updated: 2022/09/15 16:52:25 by dessekinfem      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

#define MAXSIZE 1000

int	g_temp_buff[MAXSIZE][10];

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_store_buffer(int n)
{
	int	i;
	int	k;
	int	in;

	in = 0;
	while (in < n)
	{
		k = in;
		i = 0;
		while (i <= 9 && k <= 9)
		{
			g_temp_buff[in][i] = k;
			i++;
			k++;
		}
		in++;
	}
}

void	ft_print_possiblities(int n, int k, int j, int i)
{
	long	t;
	long	s;
	long	m;
	char	temp;

	m = j + 1;
	s = g_temp_buff[j][i];
	temp = s % 10 + '0';
	ft_putchar(temp);
	while (m < n)
	{
		t = g_temp_buff[j + m][k];
		if (t == 0)
			break ;
		temp = t % 10 + '0';
		ft_putchar(temp);
		m++;
	}
}	

void	ft_n_combination(int i, int j, int n)
{
	long	counter;
	long	k;

	k = i;
	counter = n - 1;
	while (k <= (9 - counter))
	{
		if (g_temp_buff[n][k] == 0 && j != 0)
			break ;
		if (g_temp_buff[j][i] == 0 && j != 0)
			break ;
		ft_print_possiblities(n, k, j, i);
		if (i < (9 - (n - 1)))
		{
			ft_putchar(',');
			ft_putchar(' ');
		}
		k++;
	}
}

void	ft_print_combn(int n)
{
	int	i;
	int	j;
	int	k;

	if (n > 0 && n < 10)
	{
		ft_store_buffer(n);
		i = 0;
		while (i <= 9)
		{
			j = 0;
			while (j <= n)
			{
				ft_n_combination(i, j, n);
				j++;
			}
			i++;
		}
		ft_putchar('\n');
	}
}

// int main(){
// 	ft_print_combn(3);
// 	return 0;
// }