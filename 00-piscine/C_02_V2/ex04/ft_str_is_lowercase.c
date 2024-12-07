/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: author- <author-@student.mail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 13:56:22 by author-           #+#    #+#             */
/*   Updated: 2024/10/05 17:24:57 by author-          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 97 || str[i] > 122)
		{
			return (0);
		}
		i++;
	}
	return (1);
}

/*
#include <stdio.h>
int main(void)
{
	char	*str;
	int	result;

	str = "esto";
	printf("\n");
	result = ft_str_is_lowercase(str);
	printf("\n'%s' result: %d", str, result);
	
	str = "0987654321";
	printf("\n");
	result = ft_str_is_lowercase(str);
	printf("\n'%s' result: %d", str, result);
	
	str = "Ejemplo con Mayusculas y  minusculas";
	printf("\n");
	result = ft_str_is_lowercase(str);
	printf("\n'%s' result: %d", str, result);
	
	str = "";
	printf("\n");
	result = ft_str_is_lowercase(str);
	printf("\n'%s' result: %d\n", str, result);

	return (0);
}
*/
