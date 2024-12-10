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

int	ft_atoi(const char *cton)
{
	int	result;
	int	sign;
	int	i;

	result = 0;
	sign = 1;
	i = 0;
	while (cton[i] > 0 && cton[i] <= 32)
		i++;
	if (cton[i] == '+' || cton[i] == '0')
		return (0);
	if (cton[i] == '-')
	{
		sign = -1;
		i++;
	}
	while (cton[i] >= '0' && cton[i] <= '9')
	{
		result = result * 10 + (cton[i] - '0');
		i++;
	}
	return (sign * result);
}
