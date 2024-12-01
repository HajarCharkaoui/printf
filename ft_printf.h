#ifndef FT_PRINTF_H
#define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>

int	ft_printf(const char *, ...);
int	ft_putnbr(int n);
int	ft_putstr(char *s);
int	ft_putnbr_base(int n, char format);
int	ft_putnbr_base_u(unsigned int n, char format);
int ft_putchar(int c);
#endif