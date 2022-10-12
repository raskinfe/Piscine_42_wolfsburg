/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dessekinfemichaelalemu <dessekinfemicha    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 15:46:08 by exam              #+#    #+#             */
/*   Updated: 2022/09/27 07:01:52 by dessekinfem      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char	*g_temp;
int		g_j = 0;

void	ft_concat(int size, int i, char *str, char **strs)
{
	int	f;

	f = 0;
	while (strs[i][f])
	{
		str[g_j] = strs[i][f];
		g_j++;
		f++;
	}
	if (i != size - 1)
	{
		while (*g_temp)
		{
			str[g_j] = *g_temp;
			g_j++;
			g_temp++;
		}
	}
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*str;
	int		i;

	str = "";
	if (size == 0)
		return (str);
	i = 0;
	g_temp = (char *)malloc(size * 8);
	str = (char *)malloc(size * 8);
	while (i < size)
	{
		g_temp = sep;
		ft_concat(size, i, str, strs);
		i++;
	}
	str[g_j] = '\0';
	return (str);
}

// int main()
// {
// 	char **strs;
// 	char *str;
// 	int i;
// 	i = 0;
// 	strs = (char **)malloc(100 * 8);
// 	char strarr[4][10] = {"Kinfe", "michael", "desse", "wubineh"};
// 	while (i < 4)
// 	{
// 		strs[i] = strarr[i];
// 		i++;
// 	}
// 	str = ft_strjoin(4, strs, ", ");
// 	printf("%s\n", str);
// }