/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: author- <author-@student.mail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 18:47:59 by author-           #+#    #+#             */
/*   Updated: 2024/10/02 16:48:16 by author-          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != 0)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/*
#include <stdio.h>
int	main(void)
{
	char	dest[1000];
	char	*src;
	char	*result;

	src = "hola";
	printf("src-> %s, dest-> %s \n", src, "");
	result = ft_strcpy(dest, src);

	printf("src-> %s, dest-> %s, result-> %s \n", src, dest, result);
	return (0);
}
*/