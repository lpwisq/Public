/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpwi <lpwi@student.42singapore.sg>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 16:13:05 by lpwi              #+#    #+#             */
/*   Updated: 2024/05/19 14:06:05 by lpwi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

size_t	ft_strlen(const char *str)
{
	unsigned long	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}
/*
#include <stdio.h>
#include <string.h>
int main()
{
	char *s = "hello world";
	printf("ft_strlen returns %lu\n", ft_strlen(s));
	printf("strlen(correct) returns %zu\n", strlen(s));

	return (0);
}
*/
