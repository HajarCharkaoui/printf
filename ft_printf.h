/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hacharka <hacharka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 12:08:19 by hacharka          #+#    #+#             */
/*   Updated: 2024/12/02 13:37:27 by hacharka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <limits.h>

int	ft_printf(const char *format, ...);
int	ft_putnbr(int n);
int	ft_putstr(char *s);
int	ft_putnbr_base(unsigned int n, char format);
int	ft_putnbr_u(unsigned int n);
int	ft_putchar(int c);
int	ft_putnbr_add(unsigned long n);
#endif