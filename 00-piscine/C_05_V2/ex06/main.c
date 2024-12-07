/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: author- <author-@student.mail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 16:59:03 by author-           #+#    #+#             */
/*   Updated: 2024/10/16 16:50:28 by author-          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_is_prime(int nb);

int	main(void)
{
	 int	data[20] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	//int	data[20] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
	int	result;
	int	i;

	result = 0;
	i = 0;

	while (i < 10)
	{
		result = ft_is_prime(data[i]);
			// printf("%d: %d test\n", i, data[i]);
		if (result == 1)
			printf("%d es primo\n", data[i]);
		else
			printf("%d no es primo\n", data[i]);
		i++;
	}
	return (0);
}
