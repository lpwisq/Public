/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpwi <lpwi@student.42singapore.sg>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 21:14:19 by lpwi              #+#    #+#             */
/*   Updated: 2024/09/28 12:29:10 by lpwi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void	*ft_calloc(size_t n, size_t size)
{
	void	*p;

	if (!n || !size)
		return (p = malloc(0));
	p = malloc(n * size);
	if (p == NULL)
		return (NULL);
	ft_bzero(p, n * size);
	return (p);
}
/*
#include <stdio.h>
int	main(void)
{
	char str[10];;
	char *p = (char *)ft_calloc(8539, sizeof(char));
	p = str;
	printf("ft_calloc: %s\n", p);
	char *q = (char *)calloc(8539, sizeof(char));
	q = str;
	printf("calloc: %s\n", q);
	return 0;
}
*/
/*
#include <stdio.h>
#include <string.h>
int main()
{
	int size = 8539;
 
 	void * d1 = ft_calloc(size, sizeof(int));
 	void * d2 = calloc(size, sizeof(int));
 	if (memcmp(d1, d2, size * sizeof(int)))
 		printf("%d", 1);
 	free(d1);
 	free(d2);
 	printf("%d", 2);
}
*/
