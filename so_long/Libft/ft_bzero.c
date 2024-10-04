/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpwi <lpwi@student.42singapore.sg>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/03 15:32:58 by lpwi              #+#    #+#             */
/*   Updated: 2024/05/19 14:06:28 by lpwi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h"

void	*ft_bzero(void *s, size_t n)
{
	unsigned char	c;

	c = '\0';
	ft_memset(s, c, n);
	return (s);
}
/*
#include <stdio.h>
#include <strings.h>
int	main()
{
	char str1[] = "applepie";
	char str2[] = "applepie";

	printf("str1 before memcpy : %s\n", str1);
	ft_bzero(str1, 5);
	printf("str1 after ft_memcpy : %s\n", str1);
	bzero(str2, 5);
	printf("str1 after memcpy : %s\n", str2);

	return 0; 
}
*/
