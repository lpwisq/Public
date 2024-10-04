/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpwi <lpwi@student.42singapore.sg>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/19 15:55:59 by lpwi              #+#    #+#             */
/*   Updated: 2024/05/19 15:56:00 by lpwi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static int	count_words(const char *str, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i] != '\0')
	{
		while (str[i] == c)
			i++;
		if (str[i] != c && str[i] != '\0')
			count++;
		while (str[i] != c && str[i] != '\0')
			i++;
	}
	return (count);
}

static int	find_len(const char *p, char c)
{
	int		len;

	if (ft_strchr(p, c) == NULL)
		len = ft_strlen(p);
	else
		len = ft_strchr(p, c) - p;
	return (len);
}

static void	clear_mem(int j, char **result)
{
	while (j > 0)
	{
		free(result[j - 1]);
		j--;
	}
	free(result);
}

static char	**sub_func(char ***ptr_array, char c, char const *s)
{
	int	j;
	int	len;

	j = 0;
	while (*s != '\0')
	{
		if (*s != c)
		{
			len = find_len(s, c);
			(*ptr_array)[j] = ft_substr(s, 0, len);
			if (((*ptr_array)[j]) == NULL)
			{
				clear_mem(j, *ptr_array);
				return (NULL);
			}
			j++;
			s = s + len;
		}
		else
			s++;
	}
	(*ptr_array)[j] = NULL;
	return (*ptr_array);
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	char	***ptr;

	result = (char **)malloc((count_words(s, c) + 1) * sizeof(char *));
	if (!result)
		return (NULL);
	ptr = &result;
	return (sub_func(ptr, c, s));
}
/*
#include <stdio.h>
int main()
{
    char const *s = "\0aa\0bbb";
	//printf("%s\n", s);
    char c = '\0';
    char **p = ft_split(s, c);
    int i = 0;
    while (p[i] != NULL)
    {
        printf("array %d: %s\n", i, p[i]);
        //free(p[i]);
        i++;
    }
    //free(p);
    return 0;
}
*/