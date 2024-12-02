/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hacharka <hacharka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 12:02:35 by hacharka          #+#    #+#             */
/*   Updated: 2024/12/02 15:31:43 by hacharka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_base(unsigned int n, char format)
{
	char	*s;
	int		len;

	len = 0;
	s = NULL;
	if (format == 'x')
		s = "0123456789abcdef";
	else if (format == 'X')
		s = "0123456789ABCDEF";
	if (n >= 16)
	{
		len += ft_putnbr_base(n / 16, format);
		len += ft_putnbr_base(n % 16, format);
	}
	else
		len += ft_putchar(s[n]);
	return (len);
}
