/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srioboo- <srioboo-@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 08:43:54 by srioboo-          #+#    #+#             */
/*   Updated: 2024/12/04 11:37:57 by srioboo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

int	ft_isalpha(int num);
int	ft_isdigit(int num);
int	ft_isalnum(int num);
int	ft_isascii(int num);
int	ft_isprint(int num);
int	ft_tolower(int num);
int	ft_toupper(int num);
unsigned long	ft_strlen(char *str);
char *ft_strchr(const char *s, int c);

// int ft_atoi();
// int ft_memchr();
// int ft_memcpy();
// int ft_memset();
// int ft_strlcpy();
// int ft_strnstr();
// int ft_bzero();
// int ft_memcmp();
// int ft_memmove();
int ft_strlcat(int num);
// int ft_strncmp();
// int ft_strrchr();

#endif