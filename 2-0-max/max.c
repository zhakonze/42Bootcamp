

#include <stdio.h>

int			max(int* tab, unsigned int len)
{
	int					m;
	unsigned int		i;

	i = 0;
	m = 0;

	m = tab[i];
    i++;// not important, not sure why coder included it.
	while (i <= len)
	{
		if (tab[i] > m)
		{
			m = tab[i];
			i++;
		}
		else 
			i++;
	}
	return (m);
}

//int main()
//{
//	int a[] = {1 ,2 ,37 ,9 ,4 ,5 ,16};
//	printf("%i\n", max(a, 7));
//	return (0);
//}
// Variable m was declared so it can be made possible to conmpare one int in the array to another
