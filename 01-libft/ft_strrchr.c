/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srioboo- <srioboo-@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 09:19:25 by srioboo-          #+#    #+#             */
/*   Updated: 2024/12/04 09:19:54 by srioboo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strrchr(const char *srt, int c)
{
	while (*srt != '\0')
	{
		if (srt[0] == c)
			return ((char *)srt);
		srt++;
	}
	return (NULL);
}
