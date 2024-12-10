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
	char			*ptr_src;
	char			*ptr_dest;
	unsigned int	i;

	ptr_src = (char *)src;
	ptr_dest = (char *)dest;
	i = 0;
	while (i <= n)
	{
		ptr_dest[i] = ptr_src[i];
		i++;
	}
	return (dest);
}
