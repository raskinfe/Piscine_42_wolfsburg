/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_any.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dessekinfemichaelalemu <dessekinfemicha    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 08:54:31 by dessekinfem       #+#    #+#             */
/*   Updated: 2022/10/06 14:38:26 by dessekinfem      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_any(char **tab, int (*f)(char*))
{
	int	i;

	i = 0;
	while (tab[i])
	{
		if (f(tab[i]))
			return (1);
		i++;
	}
	return (0);
}

int f (char *s)
{
	if (s[0] == '8')
		return (1);
	return (0);
}

int	main(int argc, char **argv)
{
	(void)argc;
	int i;
	i = ft_any(argv, &f);
	printf("%d\n", i);
}