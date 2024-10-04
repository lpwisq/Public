/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpwi <lpwi@student.42singapore.sg>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/03 15:32:58 by lpwi              #+#    #+#             */
/*   Updated: 2024/05/19 15:25:52 by lpwi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*t1;
	unsigned char	*t2;

	i = 0;
	t1 = (unsigned char *)s1;
	t2 = (unsigned char *)s2;
	if (!n)
		return (0);
	while (i < (n - 1) && t1[i] == t2[i])
		i++;
	if (t1[i] == t2[i])
		return (0);
	else
		return (t1[i] - t2[i]);
}
/*
#include <stdio.h>
#include <string.h>
int main()
{
	char *s1 = "atoms\0\0\0\0";
	const char *s2 = "atoms\0abc";
	printf("ft_memcmp: %d\n", ft_memcmp(s1, s2, 8));
	printf("memcmp: %d\n", memcmp(s1, s2, 8));
	return 0;
}
*/
