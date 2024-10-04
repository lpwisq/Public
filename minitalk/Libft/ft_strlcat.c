/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpwi <lpwi@student.42singapore.sg>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/16 20:37:21 by lpwi              #+#    #+#             */
/*   Updated: 2024/05/19 14:07:11 by lpwi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	unsigned int	s;
	unsigned int	d;
	unsigned int	i;

	s = 0;
	d = 0;
	i = 0;
	while (dst[d])
		d++;
	while (src[s])
		s++;
	if (size <= d)
		return (s + size);
	while (src[i] != '\0' && (d + i) < (size - 1))
	{
		dst[d + i] = src[i];
		i++;
	}
	dst[d + i] = '\0';
	return (d + s);
}
/*
#include <stdio.h>
#include <bsd/string.h>
int	main()
{
	char dest[10] = "Hello";
	const char *src = "World";
	int p = ft_strlcat(dest, src, 12);
	printf("%i\n", p);
	printf("%s\n", dest);
	
	char dest2[10] = "Hello";
	int q = strlcat(dest2, src, 12);
	printf("%i\n", q);
	printf("%s\n", dest2);
}
*/
