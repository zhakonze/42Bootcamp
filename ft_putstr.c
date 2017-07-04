/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhakonze  <marvin@42.fr>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/29 16:16:27 by zhakonze          #+#    #+#             */
/*   Updated: 2017/01/29 16:21:38 by zhakonze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)//since the only allowed function is the write
{						  //function, we can use it to creat a ft_putchar function.
	write(1, &c, 1);	// which just prints out stuff to the screen
}

void	ft_putstr(char *str)// function prototype as requested.
{
	int		i;

	i = 0;
	while(str[i] != '\0')// while the i-th element isn't an end of line character, 
	{
		ft_putchar(str[i]); // print out whatever is in that element
		i++;       	  	   // keep on printing until end of line character is reached.
	}
}
