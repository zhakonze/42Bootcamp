/* ************************************************************************** */			
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlamarre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/08 16:38:07 by mlamarre          #+#    #+#             */
/*   Updated: 2016/07/08 16:52:59 by mlamarre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>
#include <stdio.h> // when you are recreating the behaviour of a function, please 
// man the function name as it may give you hints of how you'll need to recreate. e.g here we need strlen to calculate n characters to be stored.
char	*ft_strdup(char *src)
{
	char	*dst;
	int		i;

	i = 0;
	while(src[i] != '\0')// this is the strlen function
		i++;
	i = i + 1;// or i++; adding an extra byte for the '\0' character.
	dst = (char *)malloc(sizeof(char) * i);// allocate memory for the dst variable
	while(i >= 0)
	{
		dst[i] = src[i];
		i--;// in my opinion as strlen was taking the number count the i was at
	}		// the last character so it makes sense that we iterate backwards.
	return(dst);
}

//int main()
//{
  //  char *s1 = "Strdup sux, even Geff would agree";
  //  char *s2 = ft_strdup(s1);
//
 //   printf("%s\n", s2 );
//}
