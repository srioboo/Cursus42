/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srioboo- <srioboo-@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 09:15:30 by srioboo-          #+#    #+#             */
/*   Updated: 2024/12/04 09:16:10 by srioboo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// TODO - completar
#include <stdio.h>

int	ft_atoi(const char *nptr)
{
	int	result;
	int	sign;
	// int exp = 1;
	int i = 0;

	result = 0;
	sign = 1;
	while (nptr[i] == '-')
	{
		sign = -1;
		i++;
	}

	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		printf("%c\n", nptr[i]);
		i++;
	}

	return (sign * result);
}
