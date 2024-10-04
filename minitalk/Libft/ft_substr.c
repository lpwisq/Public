/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpwi <lpwi@student.42singapore.sg>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/19 15:55:29 by lpwi              #+#    #+#             */
/*   Updated: 2024/05/19 15:55:34 by lpwi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static int	find_actuallen(char const *s, unsigned int start, size_t len)
{
	if ((start + len) <= ft_strlen(s))
		return (len);
	return (len = ft_strlen(s) - start);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*p;
	
	if (!*s)
		return (NULL);
	i = 0;
	if (start > ft_strlen(s))
		return (p = ft_strdup("\0"));
	if (len > ft_strlen(s))
		len = ft_strlen(s);
	len = find_actuallen(s, start, len);
	p = (char *)malloc((len + 1) * sizeof(char));
	if (p == NULL)
		return (NULL);
	while (i < len && s[start] != '\0')
	{
		p[i] = s[start];
		i++;
		start++;
	}
	p[i] = '\0';
	return (p);
}
/*
#include <stdio.h>
int main()
{
	char const *s = "hola";
	char *p = ft_substr(s, 2, 30);
	printf("ft_substr: %s\n", p);
	free(p);
	return 0;
}
*/
