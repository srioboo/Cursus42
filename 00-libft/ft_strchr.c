/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srioboo- <srioboo-@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 09:18:01 by srioboo-          #+#    #+#             */
/*   Updated: 2024/12/04 09:18:26 by srioboo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
// TODO - Complete

char *ft_strchr(const char *s, int c)
{
	int		i;
	int		j;
	int		found;
	char	result[sizeof(s) + 1];
	// char *result2 = "hi";

	i = 0;
	j = 0;
	found = 0;
	while (s[i])
	{
		if (s[i] == c)
			found = 1;
		if (found == 1)
		{
			printf("found %c\n", s[i]);
			printf("found %s in %s\n", s, result);
			result[j] = s[i];
			j++;
		}
		i++;
	}

	result[j + 1] = '\0'; 
	printf("HIIII: %s\n", result);
	return ("result2");
}
