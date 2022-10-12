/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dessekinfemichaelalemu <dessekinfemicha    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 22:09:09 by dessekinfem       #+#    #+#             */
/*   Updated: 2022/09/21 09:04:14 by dessekinfem      ###   ########.fr       */
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

int	ft_atoi(char *str)
{
	int	i;
	int	sign;
	int	number;

	i = 0;
	sign = 0;
	number = 0;
	while (str[i] != '\0' && is_space(str[i]))
		i++;
	while (str[i] == 45 || str[i] == 43)
	{
		if (str[i] == 45)
			sign += 1;
		i++;
	}
	while (is_numeric(str[i]) && str[i] != '\0')
	{
		number = 10 * number + (str[i] - '0');
		i++;
	}
	if (sign % 2 != 0)
		number = -number;
	return (number);
}

// int main()
// {
// 	int i = ft_atoi( " ---+--+1234ab567");
// 	printf("%d\n", i);
// }