/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_first_param.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlamarre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/28 17:21:48 by zhakonze          #+#    #+#             */
/*   Updated: 2017/02/28 17:28:29 by zhakonze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		main(int argc, char **argv)
{
	int		i;

	i = 0;
	if (argc < 2)// Remember to use less than on this one, as the test might use
		ft_putchar('\n');// more than one string, question also makes it clear that the program will take strings.
	else
	{
		while (argv[1][i] != '\0')// while the first string exsits or hasn't reached the '\0'
		{							// character 
			ft_putchar(argv[1][i]);// print out the i-th character
			i++;// and let the i iterate as long as the condition in the while loop hasn't been met.
		}
		ft_putchar('\n');// print out a new line after.
	}
	return (0);
}
