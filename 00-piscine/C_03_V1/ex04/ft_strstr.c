/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: author- <author-@student.mail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 08:59:29 by author-           #+#    #+#             */
/*   Updated: 2024/10/08 13:24:57 by author-          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	char	*str_aux;
	char	*find;

	if (*to_find == 0)
	{
		return (str);
	}
	while (*str != '\0')
	{
		str_aux = str;
		find = to_find;
		while (*str_aux && *find && *str_aux == *find)
		{
			str_aux++;
			find++;
		}
		if (*find == 0)
		{
			return (str);
		}
		str++;
	}
	return (0);
}

/*
#include <string.h>
#include <stdio.h>
int main(void)
{
   char *string1 = "buscado algo entre la multitud";
   char *string2 = "algo";
   char *result;
 
   result = ft_strstr(string1, string2);
   printf("New: \n");
   printf("%s\n", result);
   
   char *string3 = "buscado algo entre la multitud";
   char *string4 = "algo";
   char *result2;
 
   printf("\nOriginal:\n");
   result2 = strstr(string3, string4);
   printf("%s\n", result2);
}
*/
