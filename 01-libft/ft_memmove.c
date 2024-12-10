/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srioboo- <srioboo-@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 09:22:20 by srioboo-          #+#    #+#             */
/*   Updated: 2024/12/04 09:22:46 by srioboo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/types.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned int	i;

	if (src > dest)
	{
		i = 0;
		while (i < n)
		{
			((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
			i++;
		}
	}
	else
	{
		i = n;
		while (i > 0)
		{
			i--;
			((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
		}
	}
	return (dest);
}
