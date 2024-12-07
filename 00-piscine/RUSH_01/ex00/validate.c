/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validate.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: author- <author-@student.mail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 11:42:58 by author-           #+#    #+#             */
/*   Updated: 2024/10/05 13:35:35 by author-          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_print_msg(char *str);

int	ft_is_number(char arg)
{
	int	is_number;

	is_number = 0;
	if (arg >= '0' && arg <= '4' )
	{
		is_number = 1;
	}
	return (is_number);
}

int	ft_validate_args_size(int valid_parameters)
{
	char	*error_not_enought_params;
	char	*error_too_much_params;

	error_not_enought_params = "Not enought parameters (min 16)";
	error_too_much_params = "Too much parameters (max 16)";
	if (valid_parameters > 16)
	{
		ft_print_msg(error_too_much_params);
		return (0);
	}
	else if (valid_parameters < 16)
	{
		ft_print_msg(error_not_enought_params);
		return (0);
	}
	return (1);
}

int	ft_validate_args(char *arg)
{
	int		i;
	int		is_number;
	int		valid_parameters;
	char	*error_only_num_allowed;

	error_only_num_allowed = "Only numbers from 1 to 4 are allowed";
	valid_parameters = 0;
	i = 0;
	while (arg[i])
	{
		if (arg[i] != 32)
		{
			is_number = ft_is_number(arg[i]);
			if (is_number == 0)
			{
				ft_print_msg(error_only_num_allowed);
				return (0);
			}
			valid_parameters++;
		}
		i++;
	}
	is_number = ft_validate_args_size(valid_parameters);
	return (is_number);
}
