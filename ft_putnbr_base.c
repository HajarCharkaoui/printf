#include "ft_printf.h"

int ft_putnbr_base(int  n, char format)
{
    char    *s;
    int     len;

    len = 0;
    if (n < 0)
    {
        len += ft_putchar('-');
        n = -n;
    }
    if (n > 16)
    {
        len += ft_putnbr_base(n / 16, format);
    }
    if (format == 'x')
        s = "0123456789abcdef";
    else if (format == 'X')
        s = "0123456789ABCDEF";
    len +=ft_putchar(s[n % 16]);
   return (len);
}
