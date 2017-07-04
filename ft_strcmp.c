/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlamarre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/18 13:11:43 by mlamarre          #+#    #+#             */
/*   Updated: 2016/07/18 13:38:36 by mlamarre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_strcmp(char *s1, char *s2)
{
	int		i;

	i = 0;
	while (s1[i] && s2[i] && (s1[i] == s2[i]))// while s1 & s2 exist & s1 = s2
		i++;// 
	return (s1[i] - s2[i]);// if they are equal it should return 0. 
}						  // e.g (s1[5] - s2[5]) = (5-5) = 0

int main(void)
{
 	char s1[] = "Sex";
	char s2[] = "Sexy";

	printf("%d\n", ft_strcmp(s1,s2));
	return (0);
}