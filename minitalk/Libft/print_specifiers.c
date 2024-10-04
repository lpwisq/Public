/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_specifiers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpwi <lpwi@student.42singapore.sg>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/02 15:40:44 by lpwi              #+#    #+#             */
/*   Updated: 2024/06/02 15:43:47 by lpwi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

int	print_s(char *s)
{
	int	count;

	count = 0;
	if (!s)
	{
		write (1, "(null)", 6);
		return (count = 6);
	}
	while (*s)
	{
		print_c(*s);
		s++;
		count++;
	}
	return (count);
}

int	print_x(char xX, unsigned int nbr)
{
	char	*base;
	int		count;

	count = 0;
	if (xX == 'x')
		base = "0123456789abcdef";
	else
		base = "0123456789ABCDEF";
	if (nbr >= 16)
		count = count + print_x(xX, nbr / 16);
	count = count + print_c(*(base + (nbr % 16)));
	return (count);
}

int	print_di(int n)
{
	int	count;

	count = 0;
	if (n == -2147483648)
	{
		print_c('-');
		print_c('2');
		n = 147483648;
		count = count + 2;
	}
	if (n < 0)
	{
		count = count + print_c('-');
		n = (-n);
	}
	if (n >= 10)
	{
		count = count + print_di(n / 10);
		count = count + print_di(n % 10);
	}
	else
		count = count + print_c(n + '0');
	return (count);
}

int	print_u(unsigned int n)
{
	int	count;

	count = 0;
	if (n >= 10)
	{
		count = count + print_di(n / 10);
		count = count + print_di(n % 10);
	}
	else
		count = count + print_c(n + '0');
	return (count);
}
