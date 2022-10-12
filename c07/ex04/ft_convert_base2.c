/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dessekinfemichaelalemu <dessekinfemicha    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 07:10:16 by dessekinfem       #+#    #+#             */
/*   Updated: 2022/09/27 09:02:57 by dessekinfem      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	is_numeric(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}

int	is_space(char c)
{
	if (c == 32 || (c >= 9 && c <= 13))
		return (1);
	return (0);
}

void	ft_copy(char *str, char *number, int i, int sign)
{
	int	j;

	j = 0;
	if ((sign % 2) != 0)
	{
		number[0] = '-';
		j = 1;
	}
	while (is_numeric(str[i]) && str[i] != '\0')
	{
		number[j] = str[i];
		i++;
		j++;
	}
	number[j++] = '\0';
}

char	*ft_atoi(char *str)
{
	int		i;
	int		sign;
	char	*number;

	i = 0;
	sign = 0;
	number = (char *)malloc(1000);
	while (str[i] != '\0' && is_space(str[i]))
		i++;
	while (str[i] == 45 || str[i] == 43)
	{
		if (str[i] == 45)
			sign += 1;
		i++;
	}
	ft_copy(str, number, i, sign);
	return (number);
}

int	ft_strlen(char *str)
{
	char	*temp;

	temp = str;
	while (*temp)
		temp++;
	return (temp - str);
}
