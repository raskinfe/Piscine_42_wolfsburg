/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dessekinfemichaelalemu <dessekinfemicha    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 06:08:30 by dessekinfem       #+#    #+#             */
/*   Updated: 2022/09/18 21:31:51 by dessekinfem      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <string.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0')
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (s1[i] - s2[i]);
}

// int main()
// {
//     char str1[] = "this is the t";
//     char str2[] = "this is the second";
//     int i = ft_strcmp(str1, str2);
//     printf("this is from mine %d\n", i);
//     int j = strcmp(str1, str2);
//     printf("this is from stadard %d\n", j);
// }