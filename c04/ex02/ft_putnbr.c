/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dessekinfemichaelalemu <dessekinfemicha    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 21:59:41 by dessekinfem       #+#    #+#             */
/*   Updated: 2022/09/20 19:11:36 by dessekinfem      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

#define MAXSIZE 10000
#define INT_MIN -2147483648
#define INT_MAX 2147483647

char	g_buffer[MAXSIZE];

void	ft_putnbr(int nb)
{
	int	sp;
	int	sign;

	sp = 0;
	if (nb == INT_MIN)
		write(1, "-2147483648", 11);
	if (nb == 0)
		write(1, "0", 1);
	if (nb <= INT_MAX && nb > INT_MIN)
	{
		sign = nb;
		if (nb < 0)
			nb = -nb;
		while (nb > 0)
		{
			g_buffer[sp] = nb % 10 + '0';
			nb /= 10;
			sp++;
		}
		if (sign < 0)
			g_buffer[sp++] = '-';
		g_buffer[sp] = '\0';
		while (sp--)
			write(1, &g_buffer[sp], 1);
	}
}

// int main(void)
// {
// 	ft_putnbr(-2147483648);
// 	write(1,"\n",1);
// 	ft_putnbr(2147483647);
// 	write(1,"\n",1);
// 	ft_putnbr(-214);
// 	write(1,"\n",1);
// 	ft_putnbr(0);
// 	write(1,"\n",1);
// 	ft_putnbr(895);
// 	write(1,"\n",1);

// }
