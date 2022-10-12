/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dessekinfemichaelalemu <dessekinfemicha    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 12:25:58 by dessekinfem       #+#    #+#             */
/*   Updated: 2022/09/26 16:09:54 by dessekinfem      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int	ft_strlen(char *s)
{
	int	i;

	i = 0;
	while (*++s != '\0')
		++i;
	return (i);
}

char	*ft_strdup(char *src)
{
	long	i;
	long	len;
	char	*cp;

	len = ft_strlen(src);
	i = 0;
	cp = (char *)malloc(len);
	while (src[i] != '\0')
	{
		cp[i] = src[i];
		i++;
	}
	cp[i] = '\0';
	return (cp);
}

// int main()
// {
// 	char *cp;
// 	char *cp1;

// 	cp = ft_strdup("Kinfemichael Desse");
// 	cp1 = strdup("Kinfemichael Desse");

// 	printf("cp = %s\n", cp);
// 	printf("cp1 = %s\n", cp1);
// }
