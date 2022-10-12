/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dessekinfemichaelalemu <dessekinfemicha    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 08:48:44 by dessekinfem       #+#    #+#             */
/*   Updated: 2022/09/21 10:15:33 by dessekinfem      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	is_numeric(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

int	is_space(char c)
{
	if (c == 32 || (c >= 9 && c <= 13))
		return (1);
	return (0);
}

int	g_i = 0;
int	g_sign = 0;
int	g_number = 0;
int	g_len = 0;
int	g_j;

int	ft_atoi(char *str, char *base)
{
	while (str[g_i] != '\0' && is_space(str[g_i]))
		g_i++;
	while (str[g_i] == 45 || str[g_i] == 43)
	{
		if (str[g_i] == 45)
			g_sign += 1;
		g_i++;
	}
	while (is_numeric(str[g_i]) && str[g_i] != '\0')
	{
		g_number = 10 * g_number + (str[g_i] - '0');
		g_i++;
	}
	while (base[g_len] != '\0')
	{
		g_j = g_len + 1;
		while (base[g_j] != '\0')
		{
			if (base[g_j] == base[g_len])
				return (0);
			g_j++;
		}
		g_len++;
	}
	return (g_len);
}

int	g_temp;

int	ft_atoi_base(char *str, char *base)
{
	int	temp;
	int	n;

	g_temp = g_number;
	if (ft_atoi(str, base) > 1)
	{
		while (g_number)
		{
			n = 10 * n + g_number % ft_atoi(str, base);
			g_number /= ft_atoi(str, base);
		}
		while (n)
		{
			temp = 10 * temp + n % 10;
			n /= 10;
		}
		if (ft_atoi(str, base) == 2
			&& g_number % ft_atoi(str, base) == 0)
			temp = temp * 10;
		if (g_sign % 2 != 0)
			temp = -temp;
	}
	return (temp);
}

// int main()
// {
// 	int i = ft_atoi_base( " ---+--+123ab567", "01");
// }