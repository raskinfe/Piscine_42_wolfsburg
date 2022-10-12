/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do-op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dessekinfemichaelalemu <dessekinfemicha    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 09:14:30 by dessekinfem       #+#    #+#             */
/*   Updated: 2022/10/06 15:30:49 by dessekinfem      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

#define ERR_DIV_MSG "Stop : division by zero\n"
#define ERR_MOD_MSG "Stop : modulo by zero\n"

int		ft_atoi(char *str);
void	ft_putstr(char *str, int n);
int		ft_strlen(char *str);
int		ft_in_array(char c, char arr[5][1]);
char	*ft_itoa(int n);

char	g_op[5][1] = {"+", "-", "*", "%", "/"};

int	validate_op(char *str)
{
	if (ft_strlen(str) > 1)
		return (0);
	if (ft_in_array(*str, g_op) == -1)
		return (0);
	return (1);
}

void	ft_calc(int num1, char op, int num2)
{
	long	result;
	char	*str;

	if (op == '*')
		result = num1 * num2;
	if (op == '/')
		result = num1 / num2;
	if (op == '+')
		result = num1 + num2;
	if (op == '-')
		result = num1 - num2;
	if (op == '%')
		result = num1 % num2;
	str = ft_itoa(result);
	ft_putstr(str, ft_strlen(str));
	ft_putstr("\n", 1);
}

void	ft_do_op(char **strs)
{
	if (validate_op(strs[2]))
	{
		if (ft_atoi(strs[3]) == 0 && strs[2][0] == '/')
		{
			ft_putstr(ERR_DIV_MSG, 25);
			return ;
		}
		if (ft_atoi(strs[3]) == 0 && strs[2][0] == '%')
		{
			ft_putstr(ERR_MOD_MSG, 23);
			return ;
		}
		ft_calc(ft_atoi(strs[1]), strs[2][0], ft_atoi(strs[3]));
		return ;
	}
	ft_putstr("0\n", 2);
}

int	main(int argc, char **argv)
{
	if (argc == 4)
		ft_do_op(argv);
	return (0);
}
