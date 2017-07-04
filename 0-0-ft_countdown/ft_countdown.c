/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_countdown.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlamarre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/21 16:11:05 by zhakonze          #+#    #+#             */
/*   Updated: 2017/02/21 16:11:44 by zhakonze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_countdown(void)
{
	write(1, "9876543210", 10);// always make sure the byte size is equal to the 
	return (0);				  // the number of characters.
}
// OR
int ft_countdown(void)
{
	int i;

	i = '9';
	while(i >= '0')
	{
		ft_putchar(i);
		i--;
	}
	return (0);
}
