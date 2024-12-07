/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: author- <author-@student.mail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 13:23:22 by author-           #+#    #+#             */
/*   Updated: 2024/10/08 10:37:44 by author-          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((s1[i] || s2[i]) && i < n)
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (0);
}

/*
#include <stdio.h>
#include <string.h>
 
int main(void)
{
  int  result;
  int  index = 4;
  char buffer1[10] = "abcdefg";
  char buffer2[10] = "abcdg";
 
  result = ft_strncmp(buffer1, buffer2, index);
  printf( "\nCompara solo los %i primeros caracteres\n", index );
  printf( "  strncmp: " );
  if (result == 0)
    printf("\"%s\" is identical to \"%s\"\n", buffer1, buffer2);
  else if ( result < 0 )
    printf( "\"%s\" is less than \"%s\"\n", buffer1, buffer2 );
  else
    printf( "\"%s\" is greater than \"%s\"\n", buffer1, buffer2 );
}
*/
