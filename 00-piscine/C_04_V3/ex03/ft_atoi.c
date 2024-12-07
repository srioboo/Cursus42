/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: author- <author-@student.mail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 18:29:47 by author-           #+#    #+#             */
/*   Updated: 2024/10/15 10:11:43 by author-          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	result;
	int	sign;
	int	i;

	sign = 1;
	result = 0;
	i = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	while (str[i] == '-' || str[i] == '+' )
	{
		if (str[i] == '-' )
			sign *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9' )
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}
	return (result * sign);
}

/*
#include <stdlib.h>
#include <stdio.h>
int	main(void)
{
	char	str[40] = "   ---+--+2147483647iab56";
	printf("%s -> ft_atoi -> %d\n", str, ft_atoi(str));
 	char str1[40]= " ---+--+1234ab567";
	printf("%s -> ft_atoi -> %d\n", str1, ft_atoi(str1));
 	char	str2[20] = "--+-1234567";
	printf("%s -> ft_atoi -> %d\n", str2, ft_atoi(str2));
 	char	str3[20] = "0";
	printf("%s -> ft_atoi -> %d\n", str3, ft_atoi(str3));
	char	str4[40] = "2147483648";
	printf("%s -> ft_atoi ->  %d\n", str4, ft_atoi(str4));
	char	str5[40] = "2147483648";
	printf("%s -> ft_atoi ->  %d\n", str5, ft_atoi(str5));
	char	str6[40] = "42";
	printf("%s -> ft_atoi ->  %d\n", str6, ft_atoi(str6));
	return (0);
}
*/