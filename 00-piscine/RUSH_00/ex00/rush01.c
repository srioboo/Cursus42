/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: author- <author-@student.mail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 17:38:01 by darosas-          #+#    #+#             */
/*   Updated: 2024/09/28 18:26:35 by darosas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_conditional(int x, int y, int ancho, int alto)
{
	if ((ancho == 1 && alto == 1) || (ancho == x && alto == y))
		ft_putchar('/');
	else if ((ancho == x && alto == 1) || (ancho == 1 && alto == y))
		ft_putchar('\\');
	else if (((alto > 1) && (alto < y)) && ((ancho > 1) && (ancho < x)))
		ft_putchar(' ');
	else
		ft_putchar('*');
}

void	rush(int x, int y)
{
	int	ancho;
	int	alto;

	if (x <= 0 || y <= 0)
	{
		write(1, "Parametros invalidos.\n", 22);
		return ;
	}
	ancho = 1;
	alto = 1;
	while (alto <= y)
	{
		ft_conditional(x, y, ancho, alto);
		ancho++;
		if (ancho > x)
		{
			alto++;
			ancho = 1;
			ft_putchar('\n');
		}
	}
}
