/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhakonze <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/18 11:20:22 by zhakonze          #+#    #+#             */
/*   Updated: 2017/01/18 11:26:23 by zhakonze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen(char *str)// so the main purpose of this function is print
{							// the number of characters in a string.
	int		i;

	i = 0;
	while (str[i] != '\0')// so as long as the string has not reached end of line
		i++;// keep on counting each element, element after element that has a char that is not an '\0',  
	return (i);//, then return the total number of
}// elements before the element holding '\0'
