/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhakonze <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/14 11:07:46 by zhakonze          #+#    #+#             */
/*   Updated: 2017/02/14 11:25:36 by zhakonze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int argc, char **argv)
{
	int i;

	i = 0;
	if (argc == 2)// if number of arguments including the program name is equal to 
	{			// 2, then do the following...
		while(argv[1][i] != '\0')// while the string has not reached end of line,
		{						// keep moving to the next element of the string.
			i++;			// till you reach to an element before the '\0'.
		}
		i = i - 1;// strlen gives the total number of char in a str, however argv starts counting frm 0. so if a string had total of 6 characters the last 
		while (argv[1][i] != '\0')	// one is argv[1][5]
		{
			write(1, &argv[1][i], 1);// so then in this while loop ,we print the character in each element starting with the last one. 
			i--; // we can also include the following condition in the while loop (|| i == 0) and this would still work the 
		}		// same.	
	}
	write(1, "\n", 1);
	return 0;
}
