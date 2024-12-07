/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: author- <author-@student.mail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 08:47:27 by author-           #+#    #+#             */
/*   Updated: 2024/10/07 09:28:46 by author-          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (i == 0 && (str[i] >= 'a' && str[i] <= 'z'))
		{
			str[i] -= 32;
		}
		else if (i > 0 && (str[i] >= 'a' && str[i] <= 'z')
			&& (str[i - 1] >= 32 && str[i - 1] <= 47))
		{
			str[i] -= 32;
		}
		i++;
	}
	return (str);
}

/*
#include <stdio.h>
int	main(void)
{
	// char	str[];
	char	*result;

	char str[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	printf("ini:\n%s\n", str);
	result = ft_strcapitalize(str);
	printf("end:\n%s\n", str);
	
}
*/
