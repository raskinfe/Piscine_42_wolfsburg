/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dessekinfemichaelalemu <dessekinfemicha    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 07:05:51 by dessekinfem       #+#    #+#             */
/*   Updated: 2022/09/18 21:04:35 by dessekinfem      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <string.h>

#define MAXLINE 1000

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

long	g_index = -1;
char	g_temp[MAXLINE];
long	g_sp = 0;
char	*g_null = 0;

void	ft_findsubstring(char *str, char *to_find)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == to_find[0])
		{
			g_index = i;
			j = 0;
			k = i;
			while (to_find[j] != '\0')
			{
				if (str[k] != to_find[j])
					g_index = -1;
				j++;
				k++;
			}
			if (g_index != -1)
				break ;
		}
		i++;
	}
}

char	*ft_strstr(char *str, char *to_find)
{
	if (ft_strlen(to_find) == 0)
	{
		return (str);
	}
	ft_findsubstring(str, to_find);
	if (g_index >= 0)
	{
		g_sp = 0;
		while (str[g_index] != '\0')
		{
			g_temp[g_sp] = str[g_index];
			g_sp++;
			g_index++;
		}
		g_temp[g_sp] = '\0';
		g_sp = 0;
		while (g_temp[g_sp] != '\0')
		{
			str[g_sp] = g_temp[g_sp];
			g_sp++;
		}
		str[g_sp] = '\0';
		return (str);
	}
	return (g_null);
}

// int main ()
// {
// 	char str[100]="this is javatpoint with c and java";    
// 	char *sub;
// 	char *sub2;    
// 	sub=ft_strstr(str,"kinfe");    
// 	printf("\nSubstring is: %s",sub);
// 	sub2=strstr(str,"kinfe");    
// 	printf("\nSubstring is: %s",sub2);
// }