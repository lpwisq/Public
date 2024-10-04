/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_p_specifiers.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpwi <lpwi@student.42singapore.sg>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/09 16:09:15 by lpwi              #+#    #+#             */
/*   Updated: 2024/06/09 16:09:38 by lpwi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

int	print_p_sub(unsigned long long nbr)
{
	char	*base;
	char	c;
	char	count;

	count = 0;
	base = "0123456789abcdef";
	if (nbr != 0)
	{
		count = count + print_p_sub(nbr / 16);
		c = base[nbr % 16];
		write(1, &c, 1);
		count++;
	}
	else
	{
		write(1, "0", 1);
		write(1, "x", 1);
		count = count + 2;
	}
	return (count);
}

int	print_p(unsigned long long nbr)
{
	char	count;

	count = 0;
	if (nbr == 0)
	{
		write(1, "(nil)", 5);
		return (count = 5);
	}
	count = print_p_sub(nbr);
	return (count);
}
