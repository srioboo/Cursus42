/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: author- <author-@student.mail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/06 08:58:48 by author-           #+#    #+#             */
/*   Updated: 2024/10/06 08:58:51 by author-          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_size_msg(char *str)
{
	int	size;

	size = 0;
	while (str[size] != '\0')
	{
		size++;
	}
	return (size);
}

void	ft_print_msg(char *str)
{
	write(1, str, ft_size_msg(str));
	write(1, "\n", 1);
}

void	ft_print_grid(char grid[4][4])
{
	int	row;
	int	col;

	row = 0;
	col = 0;
	while (row < 4)
	{
		while (col < 4)
		{
			write(1, &grid[row][col], 1);
			col++;
		}
		col = 0;
		write(1, "\n", 1);
		row++;
	}
}
