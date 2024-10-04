/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpwi <lpwi@student.42singapore.sg>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/03 15:32:58 by lpwi              #+#    #+#             */
/*   Updated: 2024/05/19 14:33:08 by lpwi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*t;
	char	*ptr;
	char	d;

	i = 0;
	t = (char *)s;
	d = (char)c;
	while (t[i] != '\0')
		i++;
	if (d == '\0')
		return (ptr = &t[i]);
	while (i >= 0)
	{
		if (t[i] == d)
			return (ptr = &t[i]);
		i--;
	}
	return (0);
}
/*
#include <stdio.h>
#include <stdio.h>
#include <string.h>
int	main()
{
	const char *str = "teste";
	//char to_find = 1024 + 'e';
	char *p = ft_strrchr(str, 1024 + 'e');
	printf("ft_strrchr: %s\n", p);
	char *q = strrchr(str, 1024 + 'e');
	printf("strrchr: %s\n", q);
}
*/
