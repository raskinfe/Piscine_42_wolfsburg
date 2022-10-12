/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dessekinfemichaelalemu <dessekinfemicha    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 13:15:11 by dessekinfem       #+#    #+#             */
/*   Updated: 2022/09/15 16:51:32 by dessekinfem      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_char(int i, int j, int k, int l)
{
	l = j + 1;
	while (l <= '9')
	{
		ft_putchar(i);
		ft_putchar(j);
		ft_putchar(' ');
		ft_putchar(k);
		ft_putchar(l);
		if ((j != '8') || (i != '9'))
		{
			ft_putchar(',');
			ft_putchar(' ');
		}
		l++;
	}
}

void	ft_print_comb2(void)
{
	int	i;
	int	j;
	int	k;
	int	l;

	i = '0';
	while (i <= '9')
	{
		j = '0';
		while (j <= '9')
		{
			k = i;
			while (k <= '9')
			{
				ft_print_char(i, j, k, l);
				k++;
			}
			j++;
		}
		i++;
	}
}

// int main(){
// 	ft_print_comb2();
// 	ft_putchar('\n');
// 	return 0;
// }
