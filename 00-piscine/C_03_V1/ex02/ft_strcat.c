/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: author- <author-@student.mail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 16:20:25 by author-           #+#    #+#             */
/*   Updated: 2024/10/08 08:50:00 by author-          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	j = 0;
	i = 0;
	while (dest[i])
	{
		i++;
	}
	while (src[j])
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

	// result = strcat(dest, src);
	result = ft_strcat(dest, src);
	printf("source: %s\n", src);
	printf("destin: %s\n", dest);
	printf("result: %s\n", result);	

	return (0);
}*/
