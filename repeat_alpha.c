/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlamarre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/20 16:58:21 by mlamarre          #+#    #+#             */
/*   Updated: 2016/07/20 17:23:02 by mlamarre         ###   ########.fr       */
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
	int		n;// to tell us what position the character is in the alphabert,

	i = 0;
	if (argc != 2)//because if its not two then it can't take any strings, as the first one 
		ft_putchar('\n');//is a programme name, so it just prints a new line.
	else if (argc == 2)
	{
		while (argv[1][i] != '\0')//while the string has not reached end of line, do the following/ check for the following
		{
			if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
			{
				n = argv[1][i] - 64;//in ascii uppercase 'A' is represented by the number 65, so by subtracting 64 from any 
				while (n > 0) 	//character we are tryna find out what number it is on the alphabet, therefore printing
				{				//that character that number of times.
					ft_putchar(argv[1][i]);
					n--;// do this loop the number of times the character comes in the alphabert.
				}
			}
			else if (argv[1][i] >= 'a' && argv[1][i] <= 'z')// if the characters are in lowercase									
			{
				n = argv[1][i] - 96;
				while (n > 0)
				{
					ft_putchar(argv[1][i]);
					n--;
				}
			}
			else
				ft_putchar(argv[1][i]);// we still have to print out whatever is in the string, as long as
			i++; // its not the nul terminator.
		}
		ft_putchar('\n');
	}
	return (0);
}
