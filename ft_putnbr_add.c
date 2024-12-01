#include "ft_printf.h"

int ft_putnbr_add(unsigned long n)
{
    char *s = "0123456789abcdef";
    int len = 0;

    if (n >= 16)
        len += ft_putnbr_add(n / 16);
    len += ft_putchar(s[n % 16]);
    return (len);
}
