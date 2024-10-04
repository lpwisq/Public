/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpwi <lpwi@student.42singapore.sg>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 21:14:19 by lpwi              #+#    #+#             */
/*   Updated: 2024/06/16 14:06:33 by lpwi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>
#include <stdlib.h>

char	*gnl_strchr(char *t, int d)
{
	int		i;
	char	*ptr;

	i = 0;
	if (!t)
		return (0);
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

static int	gnl_strjoin_len(char **s1, char **s2)
{
	int	len;

	len = 0;
	if (!*s1)
		len = gnl_strlen(*s2) + 1;
	else if (!s2)
		len = gnl_strlen(*s1) + 1;
	else
		len = gnl_strlen(*s1) + gnl_strlen(*s2) + 1;
	return (len);
}

char	*gnl_strjoin(char *s1, char *s2)
{
	int		i;
	int		j;
	int		len;
	char	*p;

	i = 0;
	j = 0;
	len = gnl_strjoin_len(&s1, &s2);
	p = (char *)malloc(len * sizeof(char));
	if (p == NULL)
		return (NULL);
	while (s1 && s1[i] != '\0')
	{
		p[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
	{
		p[i + j] = s2[j];
		j++;
	}
	p[i + j] = '\0';
	free(s1);
	return (p);
}

size_t	gnl_strlen(const char *str)
{
	unsigned long	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*gnl_substr(char *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*p;

	if (!*s)
		return (NULL);
	i = 0;
	if (len > gnl_strlen(s))
		len = gnl_strlen(s);
	else if ((start + len) > gnl_strlen(s))
		len = gnl_strlen(s) - start;
	p = (char *)malloc((len + 1) * sizeof(char));
	if (p == NULL)
		return (NULL);
	while (i < len && s[start] != '\0')
		p[i++] = s[start++];
	p[i] = '\0';
	return (p);
}

/*
#include <string.h>
#include <stdio.h>
int	main(void)
{
	char str[] = "hello";
	char *a = gnl_strdup(str);
	char *b = strdup(str);
	printf("gnl_strdup: %s\n", a);
	printf("strdup: %s\n", b);
	free(a);
	free(b);
	return 0;
}
*/
