/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hacharka <hacharka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 15:52:28 by hacharka          #+#    #+#             */
/*   Updated: 2024/11/29 11:19:12 by hacharka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static	int	check_con(char format, va_list args)
{
	int	len;

	len = 0;
	if (format == 'd' || format == 'i')
	{
		len = ft_putnbr(va_arg(args, int));
	return (len);
	}
	
	else if (format == 'c')
	return (len+= ft_putchar(va_arg(args, int)));
	else if (format == 's')
	return (len+= ft_putstr(va_arg(args, char *)));
	else if (format == 'x' || format == 'X')
	return (len+= ft_putnbr_base(va_arg(args, int), format));
	else if (format == 'p')
	return (len+= ft_putstr("0X") +  ft_putnbr_base(va_arg(args, int), 'x'));
	else if (format == '%')
	return (len+= ft_putchar('%'));
	else
	return (len);
}

int	ft_printf(const char *format, ...)
{
	va_list args;
	int i;
	int count;

	va_start(args, format);
	i = 0;
	count = 0;
	while (format[i])
	{
		if (format[i] == '%')
		{
			i++;
			if (format[i] == '\0')
			break;
			count += check_con(format[i], args);
		}
		else
		{
			count += ft_putchar(format[i]);
		}
		i++;
	}
	va_end (args);
	return (count);
}
#include <stdio.h>
int main()
{
	char *p;
	p = "safia";
	ft_printf("hello my name is %s and i'm %d and my add is %p\n", "hajar", 23, p);
	ft_printf("\nhellpp fnnf %d\n", 55);
	ft_putnbr(32);
}