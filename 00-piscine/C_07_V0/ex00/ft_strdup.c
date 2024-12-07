/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: author- <author-@student.mail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 11:12:46 by author-           #+#    #+#             */
/*   Updated: 2024/10/17 11:49:16 by author-          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

#include <stdio.h>
#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	char *new_str;
	int	str_len;

	str_len = ft_strlen(src) + 1;
	printf("str_len %d", str_len);
	new_str = (char*)malloc(str_len * sizeof(char));
	while (*new_str)
	{
		write(1, &new_str, 1);
		write(1, "\n", 1);
		new_str++;
	}
	free(new_str);
	return (new_str);
}



int	main(void)
{
	char str[1000] = "Hola mundo";

	char *hello = ft_strdup(str);
	while (*hello)
	{
		write(1, &hello, 11);
		write(1, "\n", 11);
		hello++;
	}
	return (0);
}
