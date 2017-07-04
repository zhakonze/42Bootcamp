/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maff_alpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlamarre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/14 10:54:26 by zhakonze          #+#    #+#             */
/*   Updated: 2016/07/14 10:58:57 by zhakonze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Easy way
#include <unistd.h>

int		main(void)
{
	write(1, "aBcDeFgHiJkLmNoPqRsTuVwXyZ\n", 27);// '\n' is considered as one character.
	return (0);
}


// Other way.
#include <stdio.h>

int main()
{
        char l;// meaning lower-case
        char u;// meaning upper-case
        int i;

        i = 0;// just as a counter varible of how many times it should iterate
        l = 'a';
        u = 'B';
        while(i <= 12 )// this condition will always tell you how many times a loop
        {			   // will run, and from it we are able to tell what to use as an incrementer, i this case its 'i'.
                printf("%c" ,l);
                printf("%c" , u);
                l = l + 2;// to change the value of the variable 'l' and 'u' we use the assigment op'=' to assign a new value
                u = u + 2;// and every time the loop runs the value changes.
                i++;// we use i to tell how many times the loop will run.
        }
        printf("%s", "\n");
        return (0);
}



// Even other ways.
#include <stdio.h>
#include <unistd.h>
int main()
{
        int i;

        char l[] = "aBcDeFgHiJkLmNoPqRsTuVwXyZ";// an array of unknown size is created as just 'array[]'
        i = 0;// an array first element is at index '0'.
        while(l[i] != '\0')
        {
         printf("%c", l[i]);
         i++;
        }
        printf("%s", "\n");
        return(0);
}