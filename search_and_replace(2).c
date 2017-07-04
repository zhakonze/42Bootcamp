/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_replace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhakonze <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/17 17:09:13 by zhakonze          #+#    #+#             */
/*   Updated: 2017/01/17 17:34:19 by zhakonze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)// by now you should know this.
{
	write(1, &c, 1);
}

void	search_and_replace(char *str, char a, char b)
{
	int i;

	i = 0;
	while (str[i])// while we are in the string argc[2]
	{
		if (str[i] == a)//if the string has character of argv2 then replace it that with
			ft_putchar(b); // character in argv3.
		else
			ft_putchar(str[i]);//else just print string as it is.
		i++;
	}
}

int		get_size(char *str)//same as strlen, this will make sure that the length of
{						   // "char a" and "char b" equal to 1.
	int i;			      // as the characters we are supposed to be replacing are single .
						  //as in if there is an 'a' in argv[1] replace it with 'b' and so on. 
	i = 0;
	while (str[i])
		i++;
	return (i);
}

int		main(int argc, char **argv)
{
	if (argc != 4)//if the arguments are not equal to 4, just print a new line .
	{   		//cause argc[1] is the programm name, argc[2] is the string, argc[3] is th character
		ft_putchar('\n');// to be replaced with argc[4] if argc[3] exist in argc[1].
		return (0);
	}
	if ((get_size(argv[2]) != 1) || (get_size(argv[3]) != 1))//if the argv[2] or argv[3] is not a single character
	{														 //just print a new line.
		ft_putchar('\n');
		return (0);
	}
	search_and_replace(argv[1], argv[2][0], argv[3][0]);
	ft_putchar('\n');
	return (0);
}
