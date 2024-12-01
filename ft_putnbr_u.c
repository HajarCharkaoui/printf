#include "ft_printf.h"

int	ft_putnbr_u(unsigned int n)
{
    unsigned long		nbr;
	int i;

	i = 0;
	nbr = n;
	if (nbr >= 10)
	{
		ft_putnbr_u(nbr / 10);
		ft_putnbr_u(nbr % 10);
	}
	else if (nbr <= 9)
	{
		i += ft_putchar(nbr + 48);
	}
	return (i);
}