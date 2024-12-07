/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srioboo- <srioboo-@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 09:23:06 by srioboo-          #+#    #+#             */
/*   Updated: 2024/12/04 09:23:30 by srioboo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/types.h>

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dst_size;
	size_t	src_size;

	dst_size = 0;
	src_size = 0;
	while (dst[dst_size] && (dst_size < size))
		dst_size++;
	while (src[src_size])
		src_size++;
	return (dst_size + src_size);
}
