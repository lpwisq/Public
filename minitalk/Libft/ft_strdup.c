/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpwi <lpwi@student.42singapore.sg>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 21:14:19 by lpwi              #+#    #+#             */
/*   Updated: 2024/03/14 15:35:28 by lpwi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(const char *src)
{
	char	*p;
	int		i;

	i = 0;
	while (src[i] != '\0')
		i++;
	p = (char *)malloc(sizeof(char) * (i + 1));
	if (p == NULL)
		return (NULL);
	i = 0;
	while (src[i] != '\0')
	{
		p[i] = src[i];
		i++;
	}
	p[i] = '\0';
	return (p);
}
/*
#include <string.h>
#include <stdio.h>
int	main(void)
{
	char str[] = "hello";
	char *a = ft_strdup(str);
	char *b = strdup(str);
	printf("ft_strdup: %s\n", a);
	printf("strdup: %s\n", b);
	free(a);
	free(b);
	return 0;
}
*/
