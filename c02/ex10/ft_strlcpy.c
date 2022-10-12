/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dessekinfemichaelalemu <dessekinfemicha    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 10:12:08 by dessekinfem       #+#    #+#             */
/*   Updated: 2022/09/17 17:22:02 by dessekinfem      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <string.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	len;

	len = 0;
	while (src[len] != '\0')
		len++;
	i = 0;
	while (src[i] != '\0')
	{
		if (i < (size - 1) && size != 0)
		{
			dest[i] = src[i];
			i++;
		}
		else
		{
			break ;
		}
	}
	if (i < size)
	{
		dest[i] = '\0';
	}
	return (len);
}

// int main ()
// {
// 	char src[] = "this a stupid string to be copied from";
// 	char buff[100];
// 	// int len = ft_strlcpy(buff, src, 100);
// 	// printf("%s : %d\n", buff, len);
// 	int len = strlcpy(buff, src, 100);
// 	printf("%s : %d\n", buff, len);
// 	return 0;
// }
