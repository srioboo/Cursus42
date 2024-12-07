/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: author- <author-@student.mail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/29 17:13:29 by author-           #+#    #+#             */
/*   Updated: 2024/10/01 09:34:20 by author-          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	int	division;
	int	modulo;

	division = a / b;
	modulo = a % b;
	*div = division;
	*mod = modulo;
}

/*int	main(void)
{
	int	a;
	int	b;
	int	*div;
	int	*mod;
	int	x;
	int	y;

	a = 12;
	b = 3;
	x = 0;
	y = 0;
	div = &x;
	mod = &y;
	printf ("div= %d mod= %d \n", *div, *mod);
	ft_div_mod(a, b, div, mod);
	printf ("a= %d b= %d \n", a, b);
	printf ("div= %d mod= %d \n", *div, *mod);
	return (0);
}*/
