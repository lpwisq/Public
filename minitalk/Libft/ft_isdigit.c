/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpwi <lpwi@student.42singapore.sg>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/03 15:04:39 by lpwi              #+#    #+#             */
/*   Updated: 2024/05/19 11:48:10 by lpwi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isdigit(int c)
{
	if ((c >= '0') && (c <= '9'))
		return (2048);
	else
		return (0);
}
/*
#include <stdio.h>
#include <ctype.h>
int main()
{
	char c;
	c = '0';
	printf("zero returns %d\n", ft_isdigit(c));
	printf("zero(correct) returns %d\n", isdigit(c));

	c = '8';
	printf("digit returns %d\n", ft_isdigit(c));
	printf("digit(correct) returns %d\n", isdigit(c));

	c = '+';
	printf("non-digit returns %d\n", ft_isdigit(c));
	printf("non-digit(correct) returns %d\n", isdigit(c));
	
	return (0);
}
*/
