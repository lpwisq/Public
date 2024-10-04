/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpwi <lpwi@student.42singapore.sg>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/03 15:02:13 by lpwi              #+#    #+#             */
/*   Updated: 2024/05/19 12:01:04 by lpwi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isascii(int c)
{
	if ((c >= 0) && (c <= 127))
		return (1);
	else
		return (0);
}
/*
#include <stdio.h>
#include <ctype.h>
int main()
{
	char c;
	c = '\n';
	printf("ascii returns %d\n", ft_isascii(c));
	printf("ascii(correct) returns %d\n", isascii(c));

	c = '-';
	printf("non-ascii returns %d\n", ft_isascii(c));
	printf("non-ascii(correct) returns %d\n", isascii(c));
	
	return (0);
}
*/
