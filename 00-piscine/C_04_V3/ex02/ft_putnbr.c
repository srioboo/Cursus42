/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: author- <author-@student.mail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 09:55:19 by author-           #+#    #+#             */
/*   Updated: 2024/10/15 10:50:10 by author-          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	if (nb >= 10)
	{
		printf("nb/10: %d\n", nb / 10);
		ft_putnbr(nb / 10);
		
		ft_putchar(nb % 10 + '0');
		ft_putchar('\n');
	    printf("nb mod 10: %d\n", nb % 10);
		printf("nb mod 10: %d\n", nb % 10 + '0');
	}
	if (nb < 10)
		ft_putchar(nb + '0');
}
