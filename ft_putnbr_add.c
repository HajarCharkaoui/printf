/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_add.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hacharka <hacharka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 12:02:19 by hacharka          #+#    #+#             */
/*   Updated: 2024/12/02 12:02:20 by hacharka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_add(unsigned long n)
{
	char	*s;
	int		len;

	s = "0123456789abcdef";
	len = 0;
	if (n >= 16)
		len += ft_putnbr_add(n / 16);
	len += ft_putchar(s[n % 16]);
	return (len);
}
