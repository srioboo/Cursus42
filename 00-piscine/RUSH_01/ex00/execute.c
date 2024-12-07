/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   execute.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: author- <author-@student.mail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/06 08:58:24 by author-           #+#    #+#             */
/*   Updated: 2024/10/06 08:58:33 by author-          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

void	ft_print_grid(char init_grid[4][4]);
void	ft_print_msg(char *str);
void	ft_solve_row(int row, char res_grid[4][4]);
void	ft_solve_cross_up_left(char ini_grid[4][4], char res_grid[4][4]);

char	*ft_remove_spaces(char *str)
{
	int		i;
	int		column;
	char	*result;

	result = malloc(4 * 16);
	i = 0;
	column = 0;
	while (str[i] != 0)
	{
		if (str[i] != 32)
		{
			result[column] = str[i];
			column++;
		}
		i++;
	}
	return (result);
}

void	ft_initialize_result_grid(char result_grid[4][4])
{
	int	row;
	int	col;

	row = 0;
	col = 0;
	while (row < 4)
	{
		while (col < 4)
		{
			result_grid[row][col] = 'x';
			col++;
		}
		col = 0;
		row++;
	}
}

void	ft_resolve_game(char ini_grid[4][4], char res_grid[4][4])
{
	ft_solve_cross_up_left(ini_grid, res_grid);
}

void	ft_get_initial_data(char *str, char init_grid[4][4])
{
	int		element;
	int		row;
	int		column;
	char	*arg_without_spaces;

	arg_without_spaces = ft_remove_spaces(str);
	element = 0;
	row = 0;
	column = 0;
	while (arg_without_spaces[element] != '\0' )
	{
		while (row < 4)
		{
			while (column < 4)
			{
				init_grid[row][column] = arg_without_spaces[element];
				column++;
				element++;
			}
			column = 0;
			row++;
		}
	}
}

void	execute(char *str)
{
	char	init_grid[4][4];
	char	result_grid[4][4];

	ft_get_initial_data(str, init_grid);
	ft_initialize_result_grid(result_grid);
	ft_resolve_game(init_grid, result_grid);
	ft_print_grid(result_grid);
}
