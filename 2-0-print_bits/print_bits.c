#include <unistd.h>

void	print_bits(unsigned char octet)
{
	int		result[8];// as the question wants us to present our answer in form of 8 digits,we therefore create an array of size 8, 
	int		i;// i is declared so as to move through each index in the array.

	i = 7;// set to 7 for the last index in the array , array start counting from 0.
	while (i >= 0)// condition set to 7 >= 0, where 0 will be the first character in the array.
	{
		result[i] = octet % 2 + '0';
		octet = octet / 2;
		i--;// we going down through the loop so as to get to the begining of the loop.
	}
	i = 0;
	while (i < 8)// code will only run while i(which is currently at 0) is less than 8.
	{			//meaning it will print 8 charz starting from 0;
		write(1, &result[i], 1);
		i++;// i will(increasingly) iterate through the loop and stop at 7,which will then end the loop.
	}
} 
