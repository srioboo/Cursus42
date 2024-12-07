/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: author- <author-@student.mail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 09:43:42 by author-           #+#    #+#             */
/*   Updated: 2024/10/09 09:08:01 by author-          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;

	j = 0;
	i = 0;
	while (dest[i])
	{
		i++;
	}
	j = 0;
	while (src[j] && i < size)
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	return (i);
}

/*
#include <stdio.h>
int	main(void)
{
	char	dest[40] = "computer";
	char	src[10] = " program";
	int	size = 10;  
	int	ptr = 0;

	ptr = ft_strlcat (dest, src, size);
	printf("new ptr: %d, dest = %s\n", ptr, dest);
	
	return (0);
}
*/
