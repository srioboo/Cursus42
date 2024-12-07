/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: author- <author-@student.mail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 13:56:22 by author-           #+#    #+#             */
/*   Updated: 2024/10/03 17:58:21 by author-          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
		}
		i++;
	}
	return (str);
}

/*
#include <stdio.h>
int main(void)
{
	char	str[] = "Caracteres imprimibles";
	char 	*result;

	printf("'%s' ", str);
	result = ft_strupcase(str);
	printf("result: %s", result);
	return (0);
}*/