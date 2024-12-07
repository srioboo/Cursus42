/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: author- <author-@student.mail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 10:14:55 by author-           #+#    #+#             */
/*   Updated: 2024/10/14 16:07:31 by author-          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_reverse_str(char *to_string, int initial)
{
	int		j;
	int		k;
	char	temp;

	j = 0;
	k = initial - 1;
	while (j < k)
	{
		temp = to_string[j];
		to_string[j] = to_string[k];
		to_string[k] = temp;
		j++;
		k--;
	}
}

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

int	ft_validate_base(char *base_str)
{
	int		i;
	int		j;
	int		len;
	char	*base_str_aux;

	base_str_aux = base_str;
	len = ft_strlen(base_str);
	j = len / 2;
	i = 0;
	while (i <= len || j <= len)
	{
		if (base_str[i] == '-' || base_str[i] == '+'
			|| base_str_aux[j] == '-' || base_str_aux[j] == '+')
		{
			return (0);
		}
		else if (base_str[i] == base_str_aux[j])
		{
			return (0);
		}
		i++;
		j++;
	}
	return (1);
}

void	ft_to_base(int nb, char *base_str, int base_size)
{
	char	str_nb[40];
	int		i;
	int		j;

	if (nb == 0)
	{
		write (1, "0", 1);
	}
	if (nb < 0)
		nb = -nb;
	j = 0;
	while (nb > 0)
	{
		i = nb % base_size;
		if (base_size == 16)
			str_nb[j] = base_str[i];
		else
			str_nb[j] = i + '0';
		nb = nb / base_size;
		j++;
	}
	str_nb[j] = '\0';
	ft_reverse_str(str_nb, ft_strlen(str_nb));
	write (1, &str_nb, ft_strlen(str_nb));
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	base_size;
	int	is_valid;

	is_valid = ft_validate_base(base);
	base_size = ft_strlen(base);
	if (base_size > 1 && is_valid == 1)
	{
		if (nbr < 0)
			write(1, "-", 1);
		ft_to_base(nbr, base, base_size);
	}
}

/*
int	main(void)
{
	int	i;
	char	*base10 = "0123456789";
	char	*base16 = "0123456789ABCDEF";
	char	*base8 = "poniguay";
	char	*base2 = "01";

	// i = 40;
	i = -2147483646;
	// i = 0;
	write(1, "base10: ", 8);
	ft_putnbr_base(i, base10);
	write(1, "\n", 1);
	write(1, "base16: ", 8);
	ft_putnbr_base(i, base16);
	write(1, "\n", 1);
	write(1, "base8:  ", 8);
	ft_putnbr_base(i, base8);
	write(1, "\n", 1);
	write(1, "base2:  ", 8);
	ft_putnbr_base(i, base2);
	write(1, "\n", 1);
	return (0);
}*/
