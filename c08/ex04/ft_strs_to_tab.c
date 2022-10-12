/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dessekinfemichaelalemu <dessekinfemicha    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 17:06:48 by dessekinfem       #+#    #+#             */
/*   Updated: 2022/09/28 08:31:10 by dessekinfem      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>
#include <stdio.h>

char	*ft_strdup(char *src)
{
	long	i;
	char	*cp;

	i = 0;
	cp = (char *)malloc(150);
	while (src[i] != '\0')
	{
		cp[i] = src[i];
		i++;
	}
	cp[i] = '\0';
	return (cp);
}

int	ft_strcpy(char *str1, char *str2)
{
	int	i;

	i = 0;
	while (str1[i])
	{
		str2[i] = str1[i];
		i++;
	}
	str2[i] = '\0';
	return (i);
}

struct	s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int			i;
	t_stock_str	*ptr;

	i = 0;
	ptr = malloc(400 * ac);
	if (!ptr)
		return (NULL);
	while (i < ac)
	{
		ptr[i].str = (char *)malloc (150);
		i++;
	}
	i = 0;
	while (i < ac)
	{	
		ptr[i].size = ft_strcpy(av[i], ptr[i].str);
		ptr[i].copy = ft_strdup(ptr[i].str);
		i++;
	}
	ptr[i].copy = 0;
	ptr[i].str = 0;
	ptr[i].size = 0;
	return (ptr);
}

// int main(void)
// {
// 	char **strs;
// 	t_stock_str *ptr;
// 	strs = (char *[]){"Kinfe", "michael", "DEsse wubineh endale roba"};
// 	ptr = ft_strs_to_tab(3, strs);
// 	ft_show_tab(ptr);
// }
