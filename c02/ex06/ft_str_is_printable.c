/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dessekinfemichaelalemu <dessekinfemicha    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 00:04:58 by dessekinfem       #+#    #+#             */
/*   Updated: 2022/09/17 06:20:03 by dessekinfem      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <ctype.h>

int	ft_str_is_printable(char *str)
{
	long	i;
	char	c;

	i = 0;
	while (str[i] != '\0')
	{
		c = str[i];
		if ((c >= 0 && c <= 31) || c == 127)
		{
			return (0);
		}
		i++;
	}
	return (1);
}

// int main(){
// 	char c[] = "this is a string with non";
// 	int i = ft_str_is_printable(c);
// 	printf("%i\n", i);
// 	int i;
// 	i = 0;
// 	while(i <= 127)
// 	{
// 		printf("%d : %d :  %c\n", i, isprint(i), isprint(i)?i:'0');
// 		i++;
// 	}
// }