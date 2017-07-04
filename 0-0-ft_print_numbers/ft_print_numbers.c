/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlamarre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/29 14:51:43 by zhakonze          #+#    #+#             */
/*   Updated: 2017/03/29 14:54:48 by zhakonze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_print_numbers(void)
{
	write(1, "0123456789", 10);// always make sure the byt size is equal to the
	return (0);
}	
// OR
int ft_print_numbers(void)
{
	int i;

	i = '0';
	while(i <= '9')
	{
		ft_putchar(i);
		i++;
	}
	return (0);
}