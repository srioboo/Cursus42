/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: author- <author-@student.mail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 20:35:39 by author-           #+#    #+#             */
/*   Updated: 2024/10/03 20:35:46 by author-          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = str[i] + 32;
		}
		i++;
	}
	return (str);
}

/*
#include <stdio.h>
int main(void)
{
	char	str[] = "CARACTERES A CAMBIAR";
	char 	*result;

	printf("'%s' ", str);
	result = ft_strlowcase(str);
	printf("result: %s", result);
	return (0);
}*/
