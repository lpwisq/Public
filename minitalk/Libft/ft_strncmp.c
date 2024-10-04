/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpwi <lpwi@student.42singapore.sg>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/03 15:21:52 by lpwi              #+#    #+#             */
/*   Updated: 2024/05/19 14:56:56 by lpwi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	unsigned char	*t1;
	unsigned char	*t2;

	t1 = (unsigned char *)s1;
	t2 = (unsigned char *)s2;
	if (!n)
		return (0);
	i = 0;
	while (t1[i] != '\0' && i < (n - 1) && t1[i] == t2[i])
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
	const char *s1 = "test\200";
	const char *s2 = "test\0";
	printf("ft_strncmp: %d\n", ft_strncmp(s1, s2, 6));
	printf("strncmp: %d\n", strncmp(s1, s2, 6));
	return 0;
}
*/
