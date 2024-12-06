/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srioboo- <srioboo-@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 09:23:47 by srioboo-          #+#    #+#             */
/*   Updated: 2024/12/04 09:24:18 by srioboo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// TODO - completar

#include <stdio.h>

#include <sys/types.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	// int result;
	int i;

	printf("%zu", n);

	i = 0;
	while (s1[i] || s2[i])
	{
		if (s1[i] != s2[i])
		{
			return s1[i] - s2[i];
		}
		i++;
	}

	return (0);
}
