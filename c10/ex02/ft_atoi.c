/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dessekinfemichaelalemu <dessekinfemicha    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 11:11:39 by dessekinfem       #+#    #+#             */
/*   Updated: 2022/10/04 11:14:33 by dessekinfem      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_numeric(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

int	ft_atoi(char *str)
{
	int	num;

	num = 0;
	while (*str)
	{
		if (!is_numeric(*str))
			return (-1);
		num = 10 * num + (*str - '0');
		str++;
	}
	return (num);
}
