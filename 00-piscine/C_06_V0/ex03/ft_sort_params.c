/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: author- <author-@student.mail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 18:49:00 by author-           #+#    #+#             */
/*   Updated: 2024/10/15 16:43:37 by author-          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] || s2[i])
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (0);
}

int	main(int argc, char **argv)
{
	int	i;
	int	j;
	int	sort[10];
	int	sorter;

	i = 1;
	if (argc > 1)
	{
		while (i < argc[i][j])
		{
			sorter = ft_strcmp(argv[i][0], argv[i][1]);
			if (sorter > 0)
			{
				sort[i]
			}
		}	
	}
	return (0);
}
