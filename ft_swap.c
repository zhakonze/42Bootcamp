/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhakonze <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/18 11:27:59 by zhakonze          #+#    #+#             */
/*   Updated: 2017/01/29 16:53:21 by zhakonze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)// the purpose of this function is to swap whatever 
{								// is stored in 'a' with whatever is stored in 'b'
	int		temp;// we declare an int called temp(short for temporary), it can be whatever  
	            //name, but since it temporary stores data, why not call it temp?
	temp = *a;// so from here we can see that temp now holds the value of a,
	*a = *b; // then a now takes the value of b,
	*b = temp;// then b now hold the value of temp, which if you go back on top, is the value
}// of a. 
