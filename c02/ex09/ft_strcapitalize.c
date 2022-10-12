/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dessekinfemichaelalemu <dessekinfemicha    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 08:51:13 by dessekinfem       #+#    #+#             */
/*   Updated: 2022/09/16 10:09:51 by dessekinfem      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define IN 1
#define OUT 0

void	*ft_is_alphanum(char c, long *state)
{
	if (c >= 'a' && c <= 'z')
	{
		*state = OUT;
		return (state);
	}
	else if (c >= 'A' && c <= 'Z')
	{
		*state = OUT;
		return (state);
	}
	else if (c >= '0' && c <= '9')
	{
		*state = OUT;
		return (state);
	}
	else
	{
		*state = IN;
		return (state);
	}
}

char	*ft_strcapitalize(char *str)
{
	char	c;
	long	i;
	long	state;
	long	*sp;

	i = 0;
	state = IN;
	while (str[i] != '\0')
	{
		sp = &state;
		c = str[i];
		if (state && (c >= 'a' && c <= 'z'))
		{
			str[i] = (c - 'a') + 'A';
			state = OUT;
		}
		else if ((!state) && (c >= 'A' && c <= 'Z'))
		{
			str[i] = (c - 'A') + 'a';
		}
		ft_is_alphanum(c, sp);
		i++;
	}
	return (str);
}
