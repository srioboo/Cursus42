/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: author- <author-@student.mail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/06 17:03:00 by author-           #+#    #+#             */
/*   Updated: 2024/10/06 17:03:03 by author-          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_solve_row(int row, char res_grid[4][4])
{
	int		col;
	char	value;

	value = (char)(49);
	col = 0;
	while (col < 4)
	{
		res_grid[row][col] = value + col;
		col++;
	}
}

void	ft_solve_cross_up_left(char ini_grid[4][4], char res_grid[4][4])
{
	int	col;
	int	row;

	col = 0;
	row = 0;
	while (col < 4)
	{
		while (row < 2)
		{
			if ((ini_grid[row][col] == ini_grid[row + 2][col])
				&& ini_grid[row][col] == '4')
			{
				ft_solve_row(col, res_grid);
			}
			row++;
		}
		col++;
	}
}
