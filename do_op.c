/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlamarre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/02 11:09:14 by mlamarre          #+#    #+#             */
/*   Updated: 2016/08/02 11:54:22 by mlamarre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>// the following header files are to be added to the header 
#include <stdio.h>// file that is asked to be Created by us in the question paper
#include <stdlib.h>// also note that both the .h and .c file can be named whatever.

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		main(int argc, char **argv)// returns an int
{
	int		arg1;// for the first operand.
	int		arg3;// for the second operand.
	int		result;// just as the name says.

	result = 0;
	if (argc != 4)
		ft_putchar('\n');
	else
	{
			arg1 = atoi(argv[1]);// convert char(string) to int using atoi.
			arg3 = atoi(argv[3]);// convert char(string) to int using atoi.

			if (argv[2][0] == '+')
				result = arg1 + arg3;
			else if (argv[2][0] == '-')
				result = arg1 - arg3;
			else if (argv[2][0] == '/')
				result = arg1 / arg3;
			else if (argv[2][0] == '*')
				result = arg1 * arg3;
			else if (argv[2][0] == '%')
				result = arg1 % arg3;
			printf("%i\n", result);
	}
	return (0);
}
