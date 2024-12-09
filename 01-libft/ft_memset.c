/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srioboo- <srioboo-@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 09:27:08 by srioboo-          #+#    #+#             */
/*   Updated: 2024/12/04 09:27:28 by srioboo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/types.h>

void	*ft_memset(void *s, int c, size_t n)
{
	char			*prt;
	unsigned int	i;

	prt = (char *)s;
	i = 0;
	while (i < n)
		prt[i++] = (char)c;
	return (s);
}
