/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpwi <lpwi@student.42singapore.sg>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/03 15:32:58 by lpwi              #+#    #+#             */
/*   Updated: 2024/05/19 15:26:06 by lpwi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h"

static int	ft_check_str(size_t i, size_t len, const char *s, const char *find)
{
	size_t	a;

	a = 0;
	while (s[i + a] == find[a] && (i + a) < len)
	{
		if (a == (ft_strlen(find) - 1))
			return (1);
		else if (a < ft_strlen(find))
			a++;
	}
	return (0);
}

char	*ft_strnstr(const char *str, const char *to_find, size_t len)
{
	size_t	i;
	char	*ptr;

	i = 0;
	if (ft_strlen(to_find) == 0)
		return (ptr = (char *)str);
	if (len > 0)
	{
		while (str[i] != '\0' && i < len)
		{
			if (str[i] == to_find[0])
			{
				if (ft_check_str(i, len, str, to_find))
					return (ptr = (char *)&str[i]);
			}
			i++;
		}
	}
	return (0);
}
/*
#include <stdio.h>
#include <bsd/string.h>
int	main()
{
	char *str = "HelzllloWorld";
	char *to_find = "w";
	char *p = ft_strnstr(str, to_find,10);
	printf("ft_strnstr: %s\n", p);
	char *q = strnstr(str, to_find,10);
	printf("strnstr: %s\n", q);
}
*/
