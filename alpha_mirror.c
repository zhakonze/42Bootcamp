/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alpha_mirror.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhakonze <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/01 15:04:28 by zhakonze          #+#    #+#             */
/*   Updated: 2017/02/02 10:51:29 by zhakonze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		main(int argc, char **argv)// means it will return an int and take some command line arguments.
{
	int		i;

	i = 0;
	if (argc != 2)// argc[1] will be the program name and argc[2] will be the string
		ft_putchar('\n');// so if argc is not equal to 2, just print a newline.
	else
	{
		while (argv[1][i] != '\0')
		{
			if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
				ft_putchar('M' - (argv[1][i] - 'N'));// 77 - (argv[1][i] - 78). 
			else if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
				ft_putchar('m' - (argv[1][i] - 'n'));// 109 - (argv[1][i] - 110), you can also use 'd' and 'w'
			else // we can pretty much use any letters that mirror each other
				ft_putchar(argv[1][i]);
			i++;
		}
		ft_putchar('\n');
	}
	return (0);
}
