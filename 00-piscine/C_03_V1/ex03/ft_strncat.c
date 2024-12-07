/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: author- <author-@student.mail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 08:44:37 by author-           #+#    #+#             */
/*   Updated: 2024/10/08 08:57:52 by author-          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	j = 0;
	i = 0;
	while (dest[i])
	{
		i++;
	}
	while (src[j] && j < nb)
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/*
#include <stdio.h>
#include <string.h>
int	main(void)
{
	char	*result;
	char	src[10] = "abcd";
	char	dest[10] = "cdef";
	int	n = 2;


	// result = strncat(dest, src, n);
	result = ft_strncat(dest, src, n);
	printf("source: %s\n", src);
	printf("destin: %s\n", dest);
	printf("result: %s\n", result);	

	return (0);
}*/
