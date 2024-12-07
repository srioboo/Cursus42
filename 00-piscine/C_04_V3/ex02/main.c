/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: author- <author-@student.mail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 09:55:19 by author-           #+#    #+#             */
/*   Updated: 2024/10/15 09:27:26 by author-          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c);
void	ft_putnbr(int nb);

int	main(void)
{
	printf("Debe mostrar 2147483647\n");
	ft_putnbr(2147483647);
	printf("\nDebe mostrar -2147483648\n");
	ft_putnbr(-2147483648);
	printf("\nDebe mostrar 0\n");
	ft_putnbr(0);
	printf("\nDebe mostrar 1\n");
	ft_putnbr(1);
	printf("\nDebe mostrar 42\n");
	ft_putnbr(42);
	printf("\n");
	return (0);
}
