/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srioboo- <srioboo-@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 08:43:54 by srioboo-          #+#    #+#             */
/*   Updated: 2024/12/06 08:56:15 by srioboo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

int				ft_isalpha(int num);
int				ft_isdigit(int num);
int				ft_isalnum(int num);
int				ft_isascii(int num);
int				ft_isprint(int num);
int				ft_tolower(int num);
int				ft_toupper(int num);
size_t			ft_strlen(const char *str);
char			*ft_strchr(const char *s, int c);
size_t			ft_strlcpy(char *dst, const char *src, size_t size);
int				ft_strncmp(const char *s1, const char *s2, size_t n);

char			*ft_strnstr(const char *big, const char *little, size_t len);

// TODO - implement block
size_t			ft_strlcat(char *dst, const char *src, size_t size);
char			*ft_strrchr(const char *s, int c);

// TODO - implement block
int				ft_atoi(const char *nptr);
void			*ft_memchr(const void *s, int c, size_t n);
void			*ft_memcpy(void *dest, const void *src, size_t n);
void			*ft_memset(void *s, int c, size_t n);
void			ft_bzero(void *s, size_t n);
int				ft_memcmp(const void *s1, const void *s2, size_t n);
void			*ft_memmove(void *dest, const void *src, size_t n);

#endif
