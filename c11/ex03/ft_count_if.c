/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dessekinfemichaelalemu <dessekinfemicha    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 08:57:03 by dessekinfem       #+#    #+#             */
/*   Updated: 2022/10/06 14:42:29 by dessekinfem      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_count_if(char **tab, int length, int (*f)(char*))
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (i < length)
	{
		if (f(tab[i]))
			count += 1;
		i++;
	}
	return (count);
}

int f (char *s)
{
	if (s[0] == '8')
		return (1);
	return (0);
}

int	main(int argc, char **argv)
{
	int i;
	i = ft_count_if(argv, argc, &f);
	printf("%d\n", i);
}