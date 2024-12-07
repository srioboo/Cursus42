/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: author- <author-@student.mail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 11:34:04 by author-           #+#    #+#             */
/*   Updated: 2024/10/05 18:12:26 by author-          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	execute(char *str);
int		ft_validate_args(char *arg);

int	main(int argc, char **argv)
{
	int	i;
	int	is_valid;

	is_valid = 0;
	i = 0;
	if (argc != 2)
	{
		return (0);
	}
	while (argv[i])
	{
		if (i == 1)
		{
			is_valid = ft_validate_args(argv[i]);
			if (is_valid == 1)
			{
				execute(argv[i]);
			}
		}
		i++;
	}
	return (1);
}
