/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: author- <author-@student.mail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 09:19:01 by author-           #+#    #+#             */
/*   Updated: 2024/10/09 09:31:37 by author-          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

/*
#include <stdio.h>
#include <string.h>
int	main(void)
{
	char	*str;
	int	len;

	
	str = "Cadena a contar";

	printf("Size of %s  is %lu by strlen\n", str, strlen(str));

	len = 0;
	len = ft_strlen(str);
	printf("Size of %s  is %d by ft_strlen\n", str, len);
	
	return (0);
}
*/
