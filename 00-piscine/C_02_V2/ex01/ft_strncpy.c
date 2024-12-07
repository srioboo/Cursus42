/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: author- <author-@student.mail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 16:52:48 by author-           #+#    #+#             */
/*   Updated: 2024/10/02 17:48:27 by author-          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

/*
#include <stdio.h>
int	main(void)
{
	char	dest[1000];
	char	*src;
	char	*result;
	unsigned int	n;

	n = 2;
	src = "hola";
	printf("src-> %s, dest-> %s \n", src, "");
	result = ft_strncpy(dest, src, n);

	printf("src-> %s, dest-> %s, result-> %s \n", src, dest, result);
	return (0);
}
*/
