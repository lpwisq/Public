/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpwi <lpwi@student.42singapore.sg>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/16 19:13:19 by lpwi              #+#    #+#             */
/*   Updated: 2024/05/19 14:07:15 by lpwi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	unsigned int	len;
	unsigned int	i;

	len = 0;
	i = 0;
	while (src[len] != '\0')
		len++;
	if (size == 0)
		return (len);
	else if (size > 0)
	{
		while (src[i] != '\0' && i < (size - 1))
		{
			dst[i] = src[i];
			i++;
		}
	}
	dst[i] = '\0';
	return (len);
}
/*
#include <stdio.h>
#include <bsd/string.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>
int	main()
{
	char *dest;
	dest = (char *)malloc(sizeof(*dest) * 15);
	memset(dest, 0, 15);
	memset(dest, 'r', 6);
	char *src = "lorem ipsum dolor sit amet";
	int p = ft_strlcpy(dest, src, 0);
	//printf("my answer %i\n", p);
	//printf("%s\n", dest);
	write(1, dest, 15);
	write(1, "\n", 1);
	
	char *dest2;
	dest2 = (char *)malloc(sizeof(*dest) * 15);
	memset(dest2, 0, 15);
	memset(dest2, 'r', 6);
	int q = strlcpy(dest2, src, -1);
	write(1, dest2, 15);
	//printf("my answer %i\n", q);
	//printf("%s\n", dest2);
}
*/
