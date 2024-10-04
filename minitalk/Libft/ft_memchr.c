/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpwi <lpwi@student.42singapore.sg>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/03 15:32:58 by lpwi              #+#    #+#             */
/*   Updated: 2024/05/19 15:25:45 by lpwi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memchr(const void *b, int c, size_t len)
{
	int		i;
	char	*ptr;
	char	*s;

	i = 0;
	s = (char *)b;
	while (len > 0)
	{
		if (s[i] == (char)c)
			return (ptr = &s[i]);
		i++;
		len--;
	}
	return (0);
}
/*
#include <stdio.h>
#include <string.h>
int	main()
{
	const char *str = "HelzllloWorld";
	const void *p = str;
	int to_find = '\0';
	void *q = ft_memchr(p, to_find, 14);
	char *r = (char *)q;
	printf("ft_memchr: %s\n", r);
	
	void *s = memchr(p, to_find, 14);
	char *t = (char *)s;
	printf("memchr: %s\n", t);
}
*/
