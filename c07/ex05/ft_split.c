/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dessekinfemichaelalemu <dessekinfemicha    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 17:18:34 by dessekinfem       #+#    #+#             */
/*   Updated: 2022/09/27 06:55:12 by dessekinfem      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

#define MAXSIZE 1000

char	g_strarr[MAXSIZE][MAXSIZE];
int		g_index = 0;

int	ft_strlen(char *str)
{
	char	*temp;

	temp = str;
	while (*temp)
		temp++;
	return (temp - str);
}

int	copy_split(char *str, char *charset)
{
	int		j;
	char	*temp;
	int		i;

	j = 0;
	i = 0;
	while (*str)
	{
		temp = charset;
		while (*temp)
		{
			if (*temp == *str)
			{
				i++;
				j = 0;
				++str;
			}
			temp++;
		}	
		g_strarr[i][j] = *str;
		j++;
		str++;
	}
	return (i);
}

char	**ft_split(char *str, char *charset)
{
	char	**strs;
	int		i;
	int		j;

	strs = (char **)malloc(1000 * 8);
	i = copy_split(str, charset);
	j = 0;
	while (g_index <= i)
	{
		if (ft_strlen(g_strarr[g_index]))
		{
			strs[j] = g_strarr[g_index];
			j++;
		}
		g_index++;
	}
	strs[j] = "0";
	return (strs);
}

// int main()
// {
// 	char **strs;

// 	strs = ft_split("JAN,FEB,MAR,APR,MAY,JUN,JUL,AUG,SEP,OCT,NOV,DEC", ",:");
// 	int i = 0;
// 	printf("JAN,FEB,MAR,APR,MAY,JUN,JUL,AUG,SEP,OCT,NOV,DEC");
// 	while (i < 13)
// 	{
// 		printf("%s\n", strs[i]);
// 		i++;
// 	}
// }