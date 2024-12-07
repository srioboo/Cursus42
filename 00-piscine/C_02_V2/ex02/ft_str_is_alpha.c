/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: author- <author-@student.mail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 17:55:49 by author-           #+#    #+#             */
/*   Updated: 2024/10/03 13:47:42 by author-          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] < 'a' || str[i] > 'z') && (str[i] < 'A' || str[i] > 'Z'))
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

	str = "eaaal";
	printf("\n");
	result = ft_str_is_alpha(str);
	printf("\n'%s' result: %d", str, result);
	
	str = "0987654321";
	printf("\n");
	result = ft_str_is_alpha(str);
	printf("\n'%s' result: %d", str, result);
	
	str = "Ejemplo con num3rs y letras 444a";
	printf("\n");
	result = ft_str_is_alpha(str);
	printf("\n'%s' result: %d", str, result);
	
	str = "";
	printf("\n");
	result = ft_str_is_alpha(str);
	printf("\n'%s' result: %d\n", str, result);

	return (0);
}*/
