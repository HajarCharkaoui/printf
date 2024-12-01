/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hacharka <hacharka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 21:08:07 by hacharka          #+#    #+#             */
/*   Updated: 2024/11/29 11:06:42 by hacharka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int n)
{
	long		nbr;
	int i;

	i = 0;
	nbr = n;
	 if (nbr < 0)
	{
		ft_putchar('-');
		nbr = (-1)*nbr;
	}
	else if (nbr >= 10)
	{
		ft_putnbr(nbr / 10);
		ft_putnbr(nbr % 10);
	}
	else if (nbr >= 0 && nbr <= 9)
	{
		i += ft_putchar(nbr + 48);
	}
	return (i);
}
