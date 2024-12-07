/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: author- <author-@student.mail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 13:56:22 by author-           #+#    #+#             */
/*   Updated: 2024/10/05 17:26:38 by author-          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 65 || str[i] > 90)
		{
			return (0);
		}
		i++;
	}
	return (1);
}

/*
#include <stdio.h>
int	main(void)
{
	char	*str;
	int	result;

	str = "MAYUSCULAS"; 
	printf("\n");
	result = ft_str_is_uppercase(str);
	printf("\n'%s' result: %d", str, result);
	
	str = "0987654321";
	printf("\n");
	result = ft_str_is_uppercase(str);
	printf("\n'%s' result: %d", str, result);
	
	str = "Ejemplo con Mayusculas y  minusculas";
	printf("\n");
	result = ft_str_is_uppercase(str);
	printf("\n'%s' result: %d", str, result);
	
	str = "";
	printf("\n");
	result = ft_str_is_uppercase(str);
	printf("\n'%s' result: %d\n", str, result);

	return (0);
}
*/
