/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpwi <lpwi@student.42singapore.sg>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/03 15:11:19 by lpwi              #+#    #+#             */
/*   Updated: 2024/05/19 14:07:37 by lpwi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		c = c + 32;
	}
	return (c);
}
/*
#include <ctype.h>
#include <stdio.h>

int main()
{
	int c = 'Z';
	printf("my function %c\n", ft_tolower(c));
	printf("correct function %c\n", tolower((unsigned char) c));
}
*/
