/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: author- <author-@student.mail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/29 17:28:31 by author-           #+#    #+#             */
/*   Updated: 2024/10/01 16:13:26 by author-          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	division;
	int	resto;

	division = *a / *b;
	resto = *a % *b;
	*a = division;
	*b = resto;
}

/*int	main(void)
{
	int	a;
	int	b;
	int	*pa;
	int	*pb;

	a = 14;
	b = 3;
	pa = &a;
	pb = &b;

	printf("a= %d b= %d pa=%p pb=%p \n", a, b, pa, pb);
	ft_ultimate_div_mod(pa, pb);
	
	printf("a= %d b= %d pa=%d pb=%d \n", a, b, *pa, *pb);
	return (0);
}*/
