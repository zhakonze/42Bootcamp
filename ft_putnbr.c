#include	"ft.h"

void		ft_putnbr(int nb)
{
	if (nb < 0)// if nb is below 0, that makes it a negative
	{		   
		ft_putchar('-');
		nb = -nb;
	}
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);// 50 / 10 = 5
		ft_putnbr(nb % 10);// 50 % 10  = 0 == 50 
	}
	else
	{
		ft_putchar(nb + '0');
	}
}