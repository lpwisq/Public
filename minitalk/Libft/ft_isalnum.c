/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpwi <lpwi@student.42singapore.sg>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/03 15:02:13 by lpwi              #+#    #+#             */
/*   Updated: 2024/05/19 11:48:25 by lpwi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if ((ft_isalpha(c) != 0) || (ft_isdigit(c) != 0))
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
	c = '0';
	printf("zero returns %d\n", ft_isalnum(c));
	printf("zero(correct) returns %d\n", isalnum(c));

	c = 's';
	printf("alnum returns %d\n", ft_isalnum(c));
	printf("alnum(correct) returns %d\n", isalnum(c));

	c = '+';
	printf("non-alnum returns %d\n", ft_isalnum(c));
	printf("non-alnum(correct) returns %d\n", isalnum(c));
	
	return (0);
}
*/
