/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpwi <lpwi@student.42singapore.sg>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/19 15:56:28 by lpwi              #+#    #+#             */
/*   Updated: 2024/09/28 12:29:43 by lpwi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static int	check_for_match(char c, char const *set)
{
	int	i;

	i = 0;
	while (set[i] != '\0')
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		first_c;
	int		last_c;
	char	*p;

	first_c = 0;
	last_c = ft_strlen(s1) - 1;
	while (check_for_match(s1[first_c], set) == 1)
		first_c++;
	while (check_for_match(s1[last_c], set) == 1)
		last_c--;
	if ((last_c - first_c) < 0)
		return (p = ft_strdup("\0"));
	p = ft_substr(s1, first_c, last_c - first_c + 1);
	return (p);
}
/*
#include <stdio.h>
int main()
{
	char const *s1 = "   xxx   xxx";
	char const *set = " x";
	printf("ft_strtrim: %s\n", ft_strtrim(s1, set));
	return 0;
}
*/
