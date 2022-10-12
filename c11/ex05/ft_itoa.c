/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dessekinfemichaelalemu <dessekinfemicha    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 09:46:35 by dessekinfem       #+#    #+#             */
/*   Updated: 2022/10/06 15:31:07 by dessekinfem      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	g_sign;

char	*ft_reverse(char *str, int len)
{
	int		i;
	char	rev[30];
	char	*temp;

	i = 0;
	while (len--)
	{
		rev[i] = str[len];
		i++;
	}
	temp = rev;
	return (temp);
}

char	*ft_itoa(int n)
{
	char	str[30];
	char	*temp;
	int		i;

	g_sign = n;
	if (n == 0)
		return ("0");
	if (n < 0)
		n = -n;
	i = 0;
	while (n)
	{
		str[i] = n % 10 + '0';
		n /= 10;
		i++;
	}
	if (g_sign < 0)
			str[i++] = '-';
	temp = ft_reverse(str, i);
	temp[i] = '\0';
	return (temp);
}
