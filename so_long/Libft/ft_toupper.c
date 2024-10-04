/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpwi <lpwi@student.42singapore.sg>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/03 15:08:46 by lpwi              #+#    #+#             */
/*   Updated: 2024/05/19 14:07:27 by lpwi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		c = c - 32;
	}
	return (c);
}
/*
#include <ctype.h>
#include <stdio.h>

int main()
{
	int c = 'a';
	printf("my function %c\n", ft_toupper(c));
	printf("correct function %c\n", toupper((unsigned char) c));
}
*/
