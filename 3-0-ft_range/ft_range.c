/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsaunder <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/24 11:28:29 by bsaunder          #+#    #+#             */
/*   Updated: 2016/06/24 11:36:58 by bsaunder         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		*ft_range(int start, int end)
{
	int *range;
	int i;

	if (start > end)
		range = (int*)malloc(sizeof(int) * (start - end));
	else
		range = (int*)malloc(sizeof(int) * (end - start + 1));
	i = 0;
	while (start != end)
	{
		range[i++] = start;
		start += (start > end) ? -1 : 1;
	}
	range[i] = start;
	//printf("%d" , range[0]);
	//printf("%d" , range[1]);
	//printf("%d" , range[2]);
	//printf("%d" , range[3]);
	//printf("%d" , range[4]);
	return (range);
}

int	main(void)
{
	ft_range(-1, -5);
	printf("%s" , "\n" );
	return (0);
}
