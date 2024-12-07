/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: author- <author-@student.mail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 09:33:09 by author-           #+#    #+#             */
/*   Updated: 2024/10/07 10:12:34 by author-          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//unsigned int ft_strlcpy(char *dest, char *src, unsigned int size)
//{
	
//}

#include <stdio.h>
#include <string.h>
 
int main(void)
{
  char source[40] = "This is the source string";
  char destination[40] = "And this is the destination string";
  char *return_string;
 
  printf( "des = \"%s\"\n", destination );
  return_string = strlcpy( destination, source, 3 );
  printf( "src = \"%s\"\n", destination );
  
  //printf( "des = \"%s\"\n", destination );
  //return_string = ft_strcpy( destination, source );
  //printf( "src = \"%s\"\n", destination );
}
