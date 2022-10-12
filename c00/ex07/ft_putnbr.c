/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dessekinfemichaelalemu <dessekinfemicha    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 13:49:20 by dessekinfem       #+#    #+#             */
/*   Updated: 2022/09/15 16:51:56 by dessekinfem      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

#define MAXSIZE 10000

void	ft_itoa(int nb, char buffer[])
{
	int	i;
	int	sign;

	sign = nb;
	if (nb < 0)
	{
		nb = -nb;
	}
	i = 0;
	while (nb > 0)
	{
		buffer[i] = nb % 10 + '0';
		nb /= 10;
		i++;
	}
	if (sign < 0)
	{
		buffer[i++] = '-';
	}
	buffer[i] = '\0';
}

void	ft_putnbr(int nb)
{
	long	i;
	long	sp;
	char	buffer[MAXSIZE];

	ft_itoa(nb, buffer);
	sp = 0;
	while (buffer[sp] != '\0')
	{
		sp++;
	}
	while (sp >= 0)
	{
		write(1, &buffer[sp], 1);
		sp--;
	}
}

// int main(){
// 	ft_putnbr(4200);
// 	return 0;
// }
