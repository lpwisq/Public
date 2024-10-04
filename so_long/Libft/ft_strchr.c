/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpwi <lpwi@student.42singapore.sg>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/03 15:32:58 by lpwi              #+#    #+#             */
/*   Updated: 2024/05/19 14:32:58 by lpwi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	*t;
	char	*ptr;
	char	d;

	i = 0;
	t = (char *)s;
	d = (char)c;
	while (t[i] != '\0')
	{
		if (t[i] == d)
			return (ptr = &t[i]);
		i++;
	}
	if (d == '\0')
		return (ptr = &t[i]);
	return (0);
}
/*
#include <stdio.h>
#include <string.h>
int	main()
{
	const char *str = "HelzllloWorld";
	//char to_find = '\0';
	char *p = ft_strchr(str, -1);
	printf("ft_strchr: %s\n", p);
	char *q = strchr(str, -1);
	printf("strchr: %s\n", q);
}
*/
