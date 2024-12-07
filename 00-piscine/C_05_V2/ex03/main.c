/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: author- <author-@student.mail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 16:08:11 by author-           #+#    #+#             */
/*   Updated: 2024/10/14 16:52:52 by author-          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_recursive_power(int nb, int power);

int	main(void)
{
	int	nb;
	int	power;
	int	result;

	nb = 4;
	power = 8;
	result = ft_recursive_power(nb, power);
	printf("%d elevado a %d es: %d\n", nb, power, result);
	nb = 3;
	power = -1;
	result = ft_recursive_power(nb, power);
	printf("%d elevado a %d es: %d\n", nb, power, result);
	nb = 0;
	power = 0;
	result = ft_recursive_power(nb, power);
	printf("%d elevado a %d es: %d\n", nb, power, result);
	nb = 1;
	power = -1;
	result = ft_recursive_power(nb, power);
	printf("%d elevado a %d es: %d\n", nb, power, result);
	nb = -2;
	power = 2;
	result = ft_recursive_power(nb, power);
	printf("%d elevado a %d es: %d\n", nb, power, result);
	nb = -2;
	power = -2;
	result = ft_recursive_power(nb, power);
	printf("%d elevado a %d es: %d\n", nb, power, result);
	return (0);
}
