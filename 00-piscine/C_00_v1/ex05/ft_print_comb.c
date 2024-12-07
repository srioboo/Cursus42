/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: author- <author-@student.mail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 12:46:18 by author-           #+#    #+#             */
/*   Updated: 2024/09/28 11:47:53 by author-          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_data(int a, int b, int c)
{
	if (a != b && a != c && b != c)
	{
		write(1, &a, 1);
		write(1, &b, 1);
		write(1, &c, 1);
		if (a != '7' || b != '8' || c != '9')
		{
			write(1, ", ", 2);
		}
	}
}

void	ft_print_comb(void)
{
	int	first_number;
	int	second_number;
	int	third_number;
	int	end_number;

	first_number = '0';
	second_number = '1';
	third_number = '3';
	end_number = '9';
	while (first_number <= end_number - 2)
	{
		while (second_number <= end_number - 1)
		{
			while (third_number <= end_number)
			{
				ft_print_data(first_number, second_number, third_number);
				third_number++;
			}
			third_number = '3';
			second_number++;
		}
		second_number = '2';
		third_number = '4';
		first_number++;
	}
}
