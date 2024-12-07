/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: author- <author-@student.mail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 13:56:22 by author-           #+#    #+#             */
/*   Updated: 2024/10/03 17:11:22 by author-          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	while (*str != '\0')
	{
		if (!(*str >= 32 && *str <= 126))
		{
			return (0);
		}
		str++;
	}
	return (1);
}

/*
#include <stdio.h>
int main(void)
{
	char	*str;
	int	result;

	str = "Caracteres imprimibles"; 
	printf("\n");
	result = ft_str_is_printable(str);
	printf("\n'%s' result: %d", str, result);
	
	str = "Caracteres no imprimibles\t como tabulador \t que pongo en la linea";
	printf("\n");
	result = ft_str_is_printable(str);
	printf("\n'%s' result: %d", str, result);
	
	str = "";
	printf("\n");
	result = ft_str_is_printable(str);
	printf("\n'%s' result: %d\n", str, result);

	return (0);
}*/
