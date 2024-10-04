/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpwi <lpwi@student.42singapore.sg>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/19 15:55:07 by lpwi              #+#    #+#             */
/*   Updated: 2024/05/19 15:55:12 by lpwi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		f(i, &s[i]);
		i++;
	}
}
/*
void	func(unsigned int n, char *c)
{
	char z = '0';
	c = &z;
}

#include <stdlib.h>
#include <stdio.h>
int main()
{
    char *s = "hello";
    ft_striteri(s, func);
    printf("%s\n", s);
}
*/
