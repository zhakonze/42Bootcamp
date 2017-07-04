#include <unistd.h>

int			wdmatch(char *str1, char *str2)
{
	while (*str1 != '\0')// we can only print out the first string if it exsit.
	{
		while ((*str2 != '\0') && (*str2 != *str1))// while the second string exsits and if the
        {						// first character of the second string is not equal to the first 
			str2++; 		// character in the first sting, move on to the next character/element.
        }
		if (*str2 != *str1)// this part is important cause if this part is skipped the code will print
        {					// out the first string when main is called and strings are given.
			return (0);
        }
		str1++;// we need to iterate through the first string so it can
	}
	return (1);
}

int			main(int argc, char **argv)
{
	if (argc == 3)
    {
		if (wdmatch(argv[1], argv[2]))
        {
			while (*argv[1])
            {
				write(1, argv[1]++, 1);
            }
        }
    }
	write(1, "\n", 1);
	return (0);
}


"faya" 
 0123'\0'

"fgvvfdxcacpolhyghbreda"
 0123456789012345678901'\0'