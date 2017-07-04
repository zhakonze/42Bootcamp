/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_last_param.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlamarre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/02 14:09:35 by zhakonze          #+#    #+#             */
/*   Updated: 2017/02/02 14:37:26 by zhakonze         ###   ########.fr       */
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
	int		n;

	i = 0;
	if (argc < 2)// remember to use less than as the program will take in strings not just one 
		ft_putchar('\n');
	else
	{
		n = argc - 1;// irrelevant but since the however what this is just doing is making it possible for us 
		while (argv[n][i] != '\0')// to get to the last string, as argv starts counting from 0, while argc starts from 1.
		{							// on line 31 you can also just write it as "while (argv[argc -1][i] != '\0')"
			ft_putchar(argv[n][i]); // and that could still work.
			i++;
		}
		ft_putchar('\n');
	}
	return (0);
}
