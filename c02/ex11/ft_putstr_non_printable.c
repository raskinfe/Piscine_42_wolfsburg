/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dessekinfemichaelalemu <dessekinfemicha    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 10:41:39 by dessekinfem       #+#    #+#             */
/*   Updated: 2022/09/17 18:20:17 by dessekinfem      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_isspace(char c)
{
	if (c == ' ' || c == '\t')
		return (1);
	return (0);
}

char	g_byte[16];
char	g_hex_data[] = "0123456789abcdef";

int	ft_convert_tohex(int c)
{
	long	i;
	long	mod;

	g_byte[0] = '\\';
	g_byte[1] = '0';
	i = 2;
	while (c)
	{
		if (c > 16)
		{
			mod = c % 16;
			c /= 16;
			g_byte[i] = g_hex_data[c];
			c = mod;
		}
		else
		{
			g_byte[i] = g_hex_data[c];
			c /= 16;
		}
		i++;
	}
	return (i);
}

void	ft_putstr(char c, long j)
{
	int	temp;
	int	k;

	if (ft_isspace(c) || (c >= '!' && c <= '~'))
	{
		ft_putchar(c);
	}
	else
	{
		temp = c & 0xff;
		k = ft_convert_tohex(temp);
		while (j < k)
		{
			ft_putchar(g_byte[j]);
			j++;
		}
	}
}

void	ft_putstr_non_printable(char *str)
{
	long	i;
	char	c;
	long	j;

	i = 0;
	j = 0;
	while (str[i] != '\0')
	{
		c = str[i];
		ft_putstr(c, j);
		i++;
	}
}

// int main ()
// {
// 	char str[] = "Coucou\ftu vas bien ?";
// 	ft_putstr_non_printable(str);
// }