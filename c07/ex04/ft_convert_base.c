/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dessekinfemichaelalemu <dessekinfemicha    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 07:12:01 by dessekinfem       #+#    #+#             */
/*   Updated: 2022/09/27 09:51:05 by dessekinfem      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

#define INT_MAX 2147483647
#define INT_MIN -2147483648

int		ft_strlen(char *str);
int		is_numeric(char c);
char	*ft_atoi(char *str);

int	ft_power(int base, int power)
{
	if (power == 0)
		return (1);
	return (base * ft_power(base, power - 1));
}

int	validate_base(char *str)
{
	int	i;
	int	j;

	i = 0;
	if (ft_strlen(str) != 2 || ft_strlen(str) != 16
		|| ft_strlen(str) != 10 || ft_strlen(str) != 8)
		return (0);
	while (str[i] != '\0')
	{
		if (!is_numeric(str[i])
			|| (str[i] >= 'a' && str[i] <= 'z'))
			return (0);
		j = i + 1;
		while (j < ft_strlen(str))
		{
			if (str[i] == str[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	ft_convert_from(char *num, char *base_from)
{
	int		len;
	int		len_num;
	int		number;
	char	temp;

	len = ft_strlen(base_from);
	len_num = ft_strlen(num);
	number = 0;
	while (*num)
	{
		temp = *num;
		if (temp >= 'A' && temp <= 'F')
			number += (10 + (temp - 'A')) * ft_power(len, len_num - 1);
		else
			number += (temp - '0') * ft_power(len, len_num - 1);
		len_num--;
		num++;
	}
	return (number);
}

char	g_hex_data[] = "0123456789ABCDEF";

char	*ft_convert_to(int num, char *base_to)
{
	char	*str;
	int		i;
	char	*temp;
	int		j;

	i = 0;
	j = 0;
	str = (char *)malloc(1000);
	temp = (char *)malloc(1000);
	while (num)
	{
		if (ft_strlen(base_to) == 16)
			str[i] = g_hex_data[num % 16];
		else
			str[i] = num % ft_strlen(base_to) + '0';
		num /= ft_strlen(base_to);
		i++;
	}
	while (--i >= 0)
	{
		temp[j] = str[i];
		j++;
	}
	temp[j] = '\0';
	return (temp);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	char	*str;
	int		num;

	str = NULL;
	if (!validate_base(base_from) || !validate_base(base_to))
		return (str);
	num = ft_convert_from(ft_atoi(nbr), base_from);
	str = ft_convert_to(num, base_to);
	return (str);
}

// int main()
// {
// 	char *i;

// 	i = ft_convert_base("2800", "0123456789ABCDF", "01");
// 	printf("%s\n", i);
// }