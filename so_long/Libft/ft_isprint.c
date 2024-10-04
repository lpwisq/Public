/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpwi <lpwi@student.42singapore.sg>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/03 15:08:05 by lpwi              #+#    #+#             */
/*   Updated: 2024/05/19 12:01:17 by lpwi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isprint(int c)
{
	if ((c >= 32) && (c <= 126))
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
	c = '\t';
	printf("print returns %d\n", ft_isprint(c));
	printf("print(correct) returns %d\n", isprint(c));

	c = '-';
	printf("non-print returns %d\n", ft_isprint(c));
	printf("non-print(correct) returns %d\n", isprint(c));
	
	return (0);
}
*/
