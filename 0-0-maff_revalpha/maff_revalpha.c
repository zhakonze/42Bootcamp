/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maff_revalpha.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlamarre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/29 15:05:32 by zhakonze          #+#    #+#             */
/*   Updated: 2017/03/29 15:06:23 by zhakonze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Easy way
#include <unistd.h>

int		main()
{
	write(1, "zYxWvUtSrQpOnMlKjIhGfEdCbA\n", 27);
	return (0);
}


// The hard way
#include <stdio.h>

int main()
{
        char l;
        char u;
        int i;

        i = 0;// just as a counter varible of how many times it should iterate
        l = 'z';
        u = 'Y';
        while(i <= 12 )
        {
                printf("%c" ,l);
                printf("%c" , u);
                l = l - 2;
                u = u - 2;
                i++;// iteration will run for 12 or 13 times...
        }
        printf("%s", "\n");
        return (0);
}


// Crazy way

#include <stdio.h>
#include <unistd.h>
int main()
{
        int i;

        char l[] = "zYxWvUtSrQpOnMlKjIhGfEdCbA";
        i = 0;
        while(l[i] != '\0')
        {
         printf("%c", l[i]);
         i++;
        }
        printf("%s", "\n");
        return(0);
}