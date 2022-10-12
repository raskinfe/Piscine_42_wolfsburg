/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dessekinfemichaelalemu <dessekinfemicha    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 06:31:05 by dessekinfem       #+#    #+#             */
/*   Updated: 2022/10/03 12:42:24 by dessekinfem      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_isspace(char c)
{
	if ((c <= 13 && c >= 9) || c == 32)
		return (1);
	return (0);
}

char	*ft_strdup(char *str)
{
	char	*cpy;
	int		i;

	cpy = (char *)malloc(sizeof(str) * 10);
	i = 0;
	while (*str)
	{
		cpy[i] = *str;
		i++;
		str++;
	}
	cpy[i] = '\0';
	return (cpy);
}

char	g_buffer[50][50];
int		g_ind = 0;
int		g_j = 0;

int	validate_case(char *temp, char *str)
{
	int	j;
	int	m;
	int	count;

	count = 0;
	if (ft_isspace(*temp))
	{
		j = 1;
		while (j < 5)
			if (!ft_isspace(*(temp + j++)))
				break ;
		m = 1;
		while (m < 5)
			if (!ft_isspace(*(str + m++)))
				break ;
		if (j != m)
			count = j;
		if (m > j)
			count = -1;
	}
	return (count);
}

char	*g_temp;
int		g_i = -1;

void	ft_split_helper(char *str, char *charset, int k)
{
	while (g_i++ < k)
	{
		g_temp = charset;
		while (*g_temp)
		{
			if (*g_temp == *str)
			{
				if (validate_case(g_temp, str) > 0)
				{
					g_temp += validate_case(g_temp, str);
					continue ;
				}
				g_buffer[g_ind][g_j] = '\0';
				g_ind++;
				if ((validate_case(g_temp, str) >= 0) || (g_temp[1] != '\0'))
					str++;
				g_i++;
				g_j = 0;
			}
			g_temp++;
		}
		g_buffer[g_ind][g_j] = *str;
		g_j++;
		str++;
	}
}

int		g_l;
int		g_m = 0;

char	**ft_split(char *str, char *charset)
{
	char	**strs;
	int		i;

	strs = (char **)malloc(1000);
	i = 0;
	while (str[i])
		i++;
	ft_split_helper(str, charset, i);
	i = 0;
	while (g_m <= g_ind)
	{
		g_l = 0;
		g_i = 0;
		while (g_buffer[g_m][g_i])
			if (!ft_isspace(g_buffer[g_m][g_i++]))
					g_l++;
		if (g_l)
		{
			strs[i] = ft_strdup(g_buffer[g_m]);
			i++;
		}
		g_m++;
	}
	strs[i] = 0;
	return (strs);
}

// int main(int argc, char **argv)
// {
// 	(void)argc;
// 	char **strs = ft_split(argv[1], argv[2]);
// 	int i = 0;
// 	while (strs[i])
// 	{
// 		printf("%s\n", strs[i]);
// 		i++;
// 	}
// }