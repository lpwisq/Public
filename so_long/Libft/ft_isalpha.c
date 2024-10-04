/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpwi <lpwi@student.42singapore.sg>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/03 15:02:13 by lpwi              #+#    #+#             */
/*   Updated: 2024/05/19 11:05:45 by lpwi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
		return (1024);
	if ((c >= 'a') && (c <= 'z'))
		return (1024);
	else
		return (0);
}
/*
#include <stdio.h>
#include <ctype.h>
int main()
{
	char c;
	c = 'Z';
	printf("uppercase returns %d\n", ft_isalpha(c));
	printf("uppercase(correct) returns %d\n", isalpha(c));

	c = 'q';
	printf("lowercase returns %d\n", ft_isalpha(c));
	printf("lowercase(correct) returns %d\n", isalpha(c));

	c = '8';
	printf("non-alpha returns %d\n", ft_isalpha(c));
	printf("non-alpha(correct) returns %d\n", isalpha(c));
	
	return (0);
}
*/
