/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dessekinfemichaelalemu <dessekinfemicha    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 09:17:05 by dessekinfem       #+#    #+#             */
/*   Updated: 2022/10/05 10:58:46 by dessekinfem      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_number(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

int	ft_atoi(char *str)
{
	long	num;
	int		sign;

	num = 0;
	sign = 0;
	if (*str == 45)
	{
		sign = 1;
		str++;
	}
	while (*str && ft_is_number(*str))
	{
		num = 10 * num + (*str - '0');
		str++;
	}
	if (sign)
		num = -num;
	return (num);
}
