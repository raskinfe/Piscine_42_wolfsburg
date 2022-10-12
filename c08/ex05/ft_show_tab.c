/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dessekinfemichaelalemu <dessekinfemicha    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 07:31:50 by dessekinfem       #+#    #+#             */
/*   Updated: 2022/09/29 12:57:13 by dessekinfem      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <unistd.h>

void	ft_putstr(char *s)
{
	while (*s)
	{
		write(1, s, 1);
		s++;
	}
}

char	g_buffer[20];

void	ft_itoa(int n)
{
	char	buffer[20];
	int		i;
	int		j;

	i = 0;
	while (n)
	{
		buffer[i] = n % 10 + '0';
		n /= 10;
		i++;
	}
	j = 0;
	while (i--)
	{
		g_buffer[j] = buffer[i];
		j++;
	}
	g_buffer[j] = '\0';
}

void	ft_show_tab(struct s_stock_str *par)
{
	int	i;

	i = 0;
	while (par[i].str)
	{
		ft_putstr(par[i].str);
		write(1, "\n", 1);
		ft_itoa(par[i].size);
		ft_putstr(g_buffer);
		write(1, "\n", 1);
		ft_putstr(par[i].str);
		write(1, "\n", 1);
		i++;
	}
}
