/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dessekinfemichaelalemu <dessekinfemicha    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 06:23:58 by dessekinfem       #+#    #+#             */
/*   Updated: 2022/09/18 21:32:01 by dessekinfem      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (s1[i] != '\0')
	{
		if (i < n && (s1[i] != s2[i]))
			return (s1[i] - s2[i]);
		i++;
	}
	if (i >= n)
		return (0);
	return (s1[i] - s2[i]);
}

// int main()
// {
//     char str1[] = "these are the first string";
//     char str2[] = "these are the second string";
//     int i = ft_strncmp(str1, str2, 20);
//     printf("this is from mine %d\n", i);
//     int j = strncmp(str1, str2, 20);
//     printf("this is from stadard %d\n", j);
// }