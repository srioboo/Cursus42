/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: author- <author-@student.mail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 10:47:24 by author-           #+#    #+#             */
/*   Updated: 2024/10/02 11:04:06 by author-          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	temp;
	int	*end;

	end = &(tab[size - 1]);
	while (*tab < *end)
	{
		temp = *tab;
		*tab = *end;
		*end = temp;
		tab++;
		end--;
	}
}

/*int	main(void)
{
	int	size;
	size = 7;

	int	array[size];
	array[0] = 1;
	array[1] = 3;
	array[2] = 6;
	array[3] = 9;
	array[4] = 5;
	array[5] = 7;
	array[6] = 2;

	int *tab = array;

	ft_sort_int_tab(tab, size);
	
	printf("%s", "\n");
	printf("%s", "\n");
	int cont = 0;
	while (cont <= size - 1)
	{
		printf("tab[%d]=%d\n", cont, *tab);
		tab++;
		cont++;
	}
	return (0);
}*/
