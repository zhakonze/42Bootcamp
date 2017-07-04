#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, c);
}

int ft_atoi(char *str)// we'll be returning an int.
{
	int i;
	int sign;
	int result;

	i = 0;
	sign = 1;// set to 1 not 0 coz 0 can never be positive or nrgative		
	result = 0;
	if(str[0] == '-')// if the first character in the string is '-' then convert the int
	{				 // digit to a negative number
		sign = '-1' // as seen here
		i++;
	}
	while(str[i] != '\0') // while not end of string
	{
		result = result * 10 + str[i] - 48);// this will convert any numeric string to its
		i++;// actual int value
	}
	return (sign * result);// always remember to return an int as the funtion is not a void function.
}