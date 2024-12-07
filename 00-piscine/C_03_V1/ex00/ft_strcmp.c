/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: author- <author-@student.mail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 13:13:16 by author-           #+#    #+#             */
/*   Updated: 2024/10/08 10:42:46 by author-          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	*argv1;
	char	*argv2;
	int	result;

	argv1 = "ABAJ";
	argv2 = "ABAA";
	result = ft_strcmp (argv1, argv2);
	printf ("result: %d\n", result);
	if (result == 0)
		printf ("\"%s\" is identical to \"%s\"\n", argv1, argv2);
	else if (result < 0)
		printf ("\"%s\" is less than \"%s\"\n", argv1, argv2);
	else
		printf ("\"%s\" is greater than \"%s\"\n", argv1, argv2);
}

