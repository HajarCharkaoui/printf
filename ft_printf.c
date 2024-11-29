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

#include "header.h"


int	ft_printf(const char *format, ...)
{
	va_list args;
	unsigned int i;
	unsigned int count;

	va_start(args, format);
	i = 0;
	count = 0;
	while (format[i])
	{
		if (format[i] == '%' && format[i + 1] != '\0')
		{
			if (format[i + 1] == 'd')
			{
				// va_arg(args, int);
				ft_putnbr(va_arg(args, int));
				count ++;
				
			}
			else if (format[i + 1] == 'c')
			{
				char c = (char)va_arg(args, int);
				write (1, &c, 1);
				count++;
			}
			else if (format[i + 1] == 's')
			{
				ft_putstr(va_arg(args, char *));
				count++;
				
			}
			else if (format[i + 1] == 'p')
			{
				
			}
			else if (format[i + 1] == 'i')
			{
				
			}
			else if (format[i + 1] == 'u')
			{
				
			}
			else if (format[i + 1] == 'x')
			{
				
			}
			else if (format[i + 1] == 'X')
			{
				
			}
			
		}
		else
		{
			if (format[i]!= 'd')
			{
				write (1, &format[i], 1);
				count += count;
			}
			
		}
		i++;
	}
	
	va_end (args);
	return (count);
	
}
#include <stdio.h>
int main()
{
	// char *p;
	// p = "safia";
	ft_printf("hello my name is %s and i'm %d\n", "hajar", 23);
	ft_putnbr(32);
	// unsigned long f;
	// f = (unsigned long)p;
}