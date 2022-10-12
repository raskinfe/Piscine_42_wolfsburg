/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dessekinfemichaelalemu <dessekinfemicha    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 23:30:31 by dessekinfem       #+#    #+#             */
/*   Updated: 2022/09/21 08:46:11 by dessekinfem      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

#define INT_MIN -2147483648
#define INT_MAX 2147483647

int	ft_strlen(char *str)
{
	int	i;
	int	j;

	i = 0;
	while (str[i] != '\0')
	{
		j = i + 1;
		while (str[j] != '\0')
		{
			if (str[j] == str[i])
				return (0);
			j++;
		}
		if (str[i] == 45 || str[i] == 43)
			return (0);
		i++;
	}
	return (i);
}

char	g_hex_data[16] = "0123456789ABCDEF";
long	g_sp = 0;

void	convert_intmin(char *base, char *buffer)
{
	long	nbr;

	nbr = 2147483648;
	while (nbr)
	{
		if (ft_strlen(base) == 16)
		{
			buffer[g_sp] = g_hex_data[nbr % 16];
			nbr /= 16;
			g_sp++;
		}
		else
		{
			buffer[g_sp] = nbr % ft_strlen(base) + '0';
			nbr /= ft_strlen(base);
			g_sp++;
		}
	}
}

void	convert(int nbr, char *base, char *buffer)
{
	if (ft_strlen(base) > 1)
	{
		while (nbr)
		{
			if (ft_strlen(base) == 16)
			{
				buffer[g_sp] = g_hex_data[nbr % 16];
				nbr /= 16;
				g_sp++;
			}
			else
			{
				buffer[g_sp] = nbr % ft_strlen(base) + '0';
				nbr /= ft_strlen(base);
				g_sp++;
			}
		}
	}
}

char	g_buffer[100];

void	ft_putnbr_base(int nbr, char *base)
{
	long	sign;

	sign = nbr;
	if (nbr == 0)
		write(1, "0", 1);
	if (nbr == INT_MIN)
		convert_intmin(base, g_buffer);
	if (nbr > INT_MIN && nbr <= INT_MAX)
	{
		if (nbr < 0)
			nbr = -nbr;
		convert(nbr, base, g_buffer);
	}
	if (sign < 0)
		g_buffer[g_sp++] = '-';
	g_buffer[g_sp] = '\0';
	if (ft_strlen(base) > 1 && nbr)
	{
		while (g_sp-- >= 0)
		{
			write(1, &g_buffer[g_sp], 1);
			if (g_sp == 0)
				break ;
		}
	}
}

// int main(void)
// {
// 	int number = INT_MIN;
// 	char *base = "0123456789abcdef";
// 	ft_putnbr_base(number, base);
// 	write(1,"\n", 1);
// 	number = 42;
// 	base = "01";
// 	ft_putnbr_base(number, base);
// 	write(1,"\n", 1);
// 	number = 42;
// 	base = "poneyvif";
// 	ft_putnbr_base(number, base);
// 	write(1,"\n", 1);
// 	number = 42;
// 	base = "poneiyvif";
// 	ft_putnbr_base(number, base);
// 	write(1,"\n", 1);
// 	base = "pone+yvif";
// 	ft_putnbr_base(number, base);
// 	write(1,"\n", 1);
// 	base = "-+";
// 	ft_putnbr_base(number, base);
// 	write(1,"\n", 1);
// 	base = "o";
// 	ft_putnbr_base(number, base);
// 	write(1,"\n", 1);
// }
