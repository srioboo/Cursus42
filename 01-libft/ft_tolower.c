/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srioboo- <srioboo-@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 09:25:08 by srioboo-          #+#    #+#             */
/*   Updated: 2024/12/04 09:25:31 by srioboo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_tolower(int num)
{
	if (num >= 'A' && num <= 'Z')
		return (num + 32);
	return (num);
}
