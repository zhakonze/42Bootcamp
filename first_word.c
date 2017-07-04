/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhakonze  <marvin@42.fr>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Updated: 2017/01/29 16:10:40 by zhakonz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c) //since the only allowed function is the write
{						  //function, we can use it to creat a ft_putchar function.
	write(1, &c, 1);	 // which just prints out stuff to the screen
}

int		main(int argc, char **argv)//we use this sort of main only if the program
{								  //should/will take cmd line arguments.		
	int		i;

	i = 0;
	if (argc != 2)//because if its not two then it can't take any strings, as the first one 
		ft_putchar('\n');//is a programme name, so it just prints a new line.
	else
	{
		while(argv[1][i] == '\t' || argv[1][i] == ' ')//while the first part of the
				i++;	//string is a space or a tab, move to the next element till you get to a character.
		while(argv[1][i] != '\t' && argv[1][i] != ' ' && argv[1][i] != '\0')//while the first
		{   									// part of the string is not a tab, space and end of line,
			ft_putchar(argv[1][i]); 		//print whatever character is in that element. 
			i++;	// keep on printing till we reach a tab, space or end of line.
		}
		ft_putchar('\n'); // then print new line.
	}
	return (0); // sine our main is an int, so it will return an int, in this case zero to mean
}				// successful or true.
