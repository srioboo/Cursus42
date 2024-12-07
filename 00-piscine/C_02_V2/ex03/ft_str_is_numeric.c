/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: author- <author-@student.mail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 13:56:22 by author-           #+#    #+#             */
/*   Updated: 2024/10/03 14:41:31 by author-          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	while (*str != '\0')
	{
		if (!(*str >= '0' && *str <= '9'))
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
	int	resul;

	str = "esto es un ejemplo de cadena solo texto";
	printf("\n");
	resul = ft_str_is_numeric(str);
	printf("\n'%s' resul: %d", str, resul);
	
	str = "0987654321";
	printf("\n");
	resul = ft_str_is_numeric(str);
	printf("\n'%s' resul: %d", str, resul);
	
	str = "Ejemplo con num3r0s y l3tras";
	printf("\n");
	resul = ft_str_is_numeric(str);
	printf("\n'%s' resul: %d", str, resul);
	
	str = "";
	printf("\n");
	resul = ft_str_is_numeric(str);
	printf("\n'%s' resul: %d\n", str, resul);

	return (0);
}*/
