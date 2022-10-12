/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   headers.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dessekinfemichaelalemu <dessekinfemicha    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 19:27:08 by dessekinfem       #+#    #+#             */
/*   Updated: 2022/09/24 19:41:29 by dessekinfem      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADERS_H
# define HEADERS_H

int		ft_format_clue(char *str, int input[4][4]);
int		**ft_solve4(int input[4][4]);
void	ft_top_bottom(int pos, int val, int **g_output);
void	ft_bottom_top(int pos, int val, int **g_output);
void	ft_left_right(int pos, int val, int **g_output);
void	ft_right_left(int pos, int val, int **g_output);
int		ft_check_empty_row(int **output);
int		ft_check_empty_column(int **output);
int		ft_in_array(int pos, int arr[4][4], int val);
int		**ft_get_possible_positions(int **output, int val);
int		ft_check_possible_position(int **positions);
void	ft_fill_possible_positions(int **output, int **input, int len);
void	ft_putchar(int a);
int		**ft_init_arr(void);
int		**ft_get_possible_positions(int **output, int val);

#endif