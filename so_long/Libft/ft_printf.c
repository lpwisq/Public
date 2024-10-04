/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpwi <lpwi@student.42singapore.sg>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/02 11:59:10 by lpwi              #+#    #+#             */
/*   Updated: 2024/06/02 15:48:53 by lpwi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include "libft.h"

int	print_c(char c)
{
	write(1, &c, 1);
	return (1);
}

int	print_specifiers(const char specifier, va_list arg)
{
	int	printlen;

	printlen = 0;
	if (specifier == 'c')
		printlen = printlen + print_c(va_arg(arg, int));
	else if (specifier == 's')
		printlen = printlen + print_s(va_arg(arg, char *));
	else if (specifier == 'p')
		printlen = printlen + print_p(va_arg(arg, unsigned long long));
	else if (specifier == 'd' || specifier == 'i')
		printlen = printlen + print_di(va_arg(arg, int));
	else if (specifier == 'u')
		printlen = printlen + print_u(va_arg(arg, unsigned int));
	else if (specifier == 'x' || specifier == 'X')
		printlen = printlen + print_x(specifier, va_arg(arg, unsigned int));
	else if (specifier == '%')
		printlen = printlen + print_c('%');
	else
		return (0);
	return (printlen);
}

int	ft_printf(const char *str, ...)
{
	va_list	arg;
	int		printlen;

	va_start(arg, str);
	printlen = 0;
	while (*str)
	{
		if (*str == '%')
		{
			str++;
			printlen = printlen + print_specifiers(*str, arg);
		}
		else
		{
			print_c(*str);
			printlen++;
		}
		str++;
	}
	va_end(arg);
	return (printlen);
}
// #include <limits.h>
// int main()
// {
// 	char c = 'c';
// 	int x = ft_printf("%x\n", LONG_MIN);
// 	int y = printf("%x\n", LONG_MIN);

// 	printf("x: %d\n", x);
// 	printf("y: %d\n", y);
// 	return 0;
// }
