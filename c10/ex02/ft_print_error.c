/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_error.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dessekinfemichaelalemu <dessekinfemicha    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 10:42:47 by dessekinfem       #+#    #+#             */
/*   Updated: 2022/10/04 10:47:49 by dessekinfem      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <errno.h>
#include <string.h>
#include <libgen.h>

void	ft_putstr(char *str, int n);

void	ft_print_error(char *prog, char *fname, int size1, int size2)
{
	ft_putstr(prog, size1);
	ft_putstr(": ", 2);
	ft_putstr(basename(fname), size2);
	ft_putstr(": ", 2);
	ft_putstr(strerror(errno), 25);
	ft_putstr("\n", 1);
}
