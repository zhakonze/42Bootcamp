/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_a.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlamarre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/21 11:01:07 by zhakonze          #+#    #+#             */
/*   Updated: 2017/02/21 11:44:33 by zhakonze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
        write(1, &c, 1);
}

int main(int argc, char **argv)
{
        if(argc != 2)// we only want it to take one argument and this argument will be of type string.
        {
                ft_putchar('a');// if no argument the programm prints 'a' followed by a '\n'.
                ft_putchar('\n');
        }
        else if (argc == 2) //if the the argument is one, the programm runs the below codes. 
        {
                int i; // i is declared so it can move through each index in the array and as a loop counter.

                i = 0;// i is initalized to 0 at the start of the string.
                while(argv[1][i] != '\0')// while the string exsits or hasn't reached the end of the string.
                {
                        if (argv[1][i] == 'a')// if the i-th character is an 'a' print 'a' and break out of  
                        {
                                ft_putchar('a');// the loop.
                                break;
                        }
                        else // else iterate through the loop till one of the conditionals is met.
                                i++;
                }
                ft_putchar('\n');// if the 'if' conditions in the loop is met, then print a '\n'. else just print a newline.

        }
        return (0);
}
