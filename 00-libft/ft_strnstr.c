/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srioboo- <srioboo-@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 09:28:14 by srioboo-          #+#    #+#             */
/*   Updated: 2024/12/04 09:28:39 by srioboo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// TODO - completar
#include <stdio.h>
#include <sys/types.h>

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	big_size;
	size_t	count;
	// printf("%s , %s , %zu\n", big, little, len);
	big_size = 0;
	// little_size = 0;
	while (big[big_size] != '\0')
		big_size++;
	// printf("big_size: %zu\n", big_size);
	count = 0;
	while (*big != '\0' && count < len)
	{
		// printf("%s , %c\n", big, *big);
		if (*big == little[0])
		{
			printf("coinciden %c", *big);
		}
		big++;
		count++;
	}
	return ("");
}
