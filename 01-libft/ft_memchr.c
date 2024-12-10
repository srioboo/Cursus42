/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srioboo- <srioboo-@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 09:21:10 by srioboo-          #+#    #+#             */
/*   Updated: 2024/12/06 08:45:09 by srioboo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned int	i;
	char			*dest;

	dest = (char *)s;
	i = 0;
	while ((i < n) && *dest != '\0')
	{
		if (*dest == c)
			return ((char *)dest);
		dest++;
		i++;
	}
	return (NULL);
}
