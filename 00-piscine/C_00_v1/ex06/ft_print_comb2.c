/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: author- <author-@student.mail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 16:02:36 by author-           #+#    #+#             */
/*   Updated: 2024/09/28 18:45:46 by author-          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

#include <stdio.h>

void	ft_print_line(int pos_1, int pos_2, int pos_3, int pos_4)
{
	write(1, &pos_1, 1);
	write(1, &pos_2, 1);
	write(1, " ", 1);
	write(1, &pos_3, 1);
	write(1, &pos_4, 1);
}

void	ft_print_comb2(void)
{
	int	pos_1;
	int	pos_2;
	int	pos_3;
	int	pos_4;
	int	end_pos;
	int counter;

	end_pos = '9';
	pos_1 = '0';
	pos_2 = '0';
	pos_3 = '0';
	pos_4 = '1';
	// while (pos_3 <= end_pos)
	//{
		counter = '0';
		while (counter <= end_pos)
		{			
			/*
			if ((pos_3 == pos_4 && pos_3 == end_pos)
				&& (pos_1 != end_pos && pos_2 != end_pos-1)
				&& (pos_1 != '7' && pos_2 != '8')) 
			{
				ft_print_line(pos_1, pos_2, pos_3, pos_4);
				pos_2++;
				pos_1 = pos_2 - 1;
				pos_3 = '0';
				pos_4 = pos_3 + 1;
				write(1, ", ", 2);
				
			} else if ((pos_3 == pos_4 && pos_3 == end_pos)
				&& (pos_1 != '7' && pos_2 != '8')) 
			{
					write(1, " ", 2);
			}
			else {
				ft_print_line(pos_1, pos_2, pos_3, pos_4);
				write(1, ", ", 2);
			}*/
			if ((pos_3 != end_pos && pos_4 == end_pos)
				&& (pos_1 != end_pos))
			{
				ft_print_line(pos_1, pos_2, pos_3, pos_4);
				pos_3++;
				counter = '0';
				// if (pos_4 == end_pos)

				write(1, ",- ", 3);
			} else if ((pos_4 == end_pos && pos_3 == end_pos) )
			{
				ft_print_line(pos_1, pos_2, pos_3, pos_4);
				// pos_1 = '0';
				
				if (pos_2 < end_pos) {
					pos_2++;
					pos_3 = '0';
					pos_4 = pos_2 + 1;
				} else {
					pos_3++;

				}
				write(1, ",+ ", 3);
				counter = '0';
			}
			else
			{
				ft_print_line(pos_1, pos_2, pos_3, pos_4);
				pos_4++;
				write(1, ", ", 2);
			}
			counter++;
		}
		// pos_3++;
	// }
}
