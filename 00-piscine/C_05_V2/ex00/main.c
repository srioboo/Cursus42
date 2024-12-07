/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: author- <author-@student.mail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/12 16:37:55 by author-           #+#    #+#             */
/*   Updated: 2024/10/17 09:28:19 by author-          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_iterative_factorial(int nb);

int	main(void)
{
	int	nb;

	nb = 8;
	printf("\nresultado:\n");
	printf("%d factorial es %d\n", nb, ft_iterative_factorial(nb));
	nb = 0;
	printf("\nresultado:\n");
	printf("%d factorial es %d\n", nb, ft_iterative_factorial(nb));
	nb = -4;
	printf("\nresultado:\n");
	printf("%d factorial es %d\n", nb, ft_iterative_factorial(nb));
	nb = 1;
	printf("\nresultado:\n");
	printf("%d factorial es %d\n", nb, ft_iterative_factorial(nb));
	return (0);
}
