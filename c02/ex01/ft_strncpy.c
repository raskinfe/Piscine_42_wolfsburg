/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dessekinfemichaelalemu <dessekinfemicha    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 23:29:30 by dessekinfem       #+#    #+#             */
/*   Updated: 2022/09/17 17:21:49 by dessekinfem      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <string.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0')
	{
		if (i < n && n != 0)
		{
			dest[i] = src[i];
			++i;
		}
		else
		{
			break ;
		}
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

// int main()
// {
// 	char src[] = "This is a stupid string";
// 	char dst[23];
// 	ft_strncpy(dst, src,  23);
// 	// printf("%s\n", dst);
// 	// strncpy(dst, src, 23);
// 	// dst[10] = '\0';
// 	printf("%s\n", dst);
// }
