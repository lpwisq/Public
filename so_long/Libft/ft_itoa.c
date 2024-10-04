/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpwi <lpwi@student.42singapore.sg>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/19 15:54:24 by lpwi              #+#    #+#             */
/*   Updated: 2024/05/19 15:54:28 by lpwi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static int	word_len(int n)
{
	int	count;

	count = 0;
	if (n <= 0)
		count = 1;
	while (n != 0)
	{
		count++;
		n = n / 10;
	}
	return (count);
}

static long long	long_nbr(long long n)
{
	long long	nbr;

	nbr = n;
	if (n < 0)
		nbr = nbr * (-1);
	return (nbr);
}

char	*ft_itoa(int nb)
{
	int			len;
	long long	n;
	char		*p;
	int			i;

	i = 0;
	len = word_len(nb);
	p = (char *)malloc(sizeof(char) * (len + 1));
	if (p == NULL)
		return (NULL);
	n = long_nbr(nb);
	p[len] = '\0';
	while (len--)
	{
		p[len] = n % 10 + 48;
		n = n / 10;
	}
	if (nb < 0)
		p[i] = '-';
	return (p);
}
/*
void	ft_print_result(char const *s)
{
	int		len;

	len = 0;
	while (s[len])
		len++;
	write(1, s, len);
}

#include <stdio.h>
int main()
{
	char *res = ft_itoa(-2147483647 -1);
	ft_print_result(res);
	free(res);
	
	return 0;
}
*/