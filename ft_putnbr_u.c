/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_u.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hacharka <hacharka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 12:02:40 by hacharka          #+#    #+#             */
/*   Updated: 2024/12/02 13:29:35 by hacharka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_u(unsigned int n)
{
	unsigned long	nbr;
	int				i;

	i = 0;
	nbr = n;
	if (n == 0)
		i++;
	while (n != 0)
	{
		n /= 10;
		i++;
	}
	if (nbr >= 10)
	{
		ft_putnbr_u(nbr / 10);
		ft_putnbr_u(nbr % 10);
	}
	else if (nbr <= 9)
	{
		ft_putchar(nbr + 48);
	}
	return (i);
}
