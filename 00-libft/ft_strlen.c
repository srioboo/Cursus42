/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srioboo- <srioboo-@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 09:18:44 by srioboo-          #+#    #+#             */
/*   Updated: 2024/12/04 09:19:11 by srioboo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/types.h>

size_t ft_strlen(const char *str)
{
	size_t len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}
