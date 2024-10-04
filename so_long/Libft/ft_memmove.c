/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpwi <lpwi@student.42singapore.sg>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/03 15:32:58 by lpwi              #+#    #+#             */
/*   Updated: 2024/05/19 14:06:50 by lpwi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char		*ptr;
	const char	*ptr_src;

	if (!dest && !src)
		return (NULL);
	ptr = dest;
	ptr_src = src;
	if (dest > src)
	{
		while (n != 0)
		{
			ptr[n - 1] = ptr_src[n - 1];
			n--;
		}
	}
	else
		ft_memcpy(ptr, ptr_src, n);
	dest = ptr;
	return (dest);
}
/*
#include <stdio.h>
#include <string.h>
int	main()
{
	char *str1 = NULL;
	char *str2 = NULL;

	printf("str1 before memcpy : %s\n", str1);
	
	// ft_memmove(str1, str2, 5);
	// printf("str1 after ft_memcpy : %s\n", str1);
	
	// char *str3 = NULL;
	// char *str4 = NULL;
	char *str3 = ((void*)0);
	char *str4 = ((void*)0);
	memmove(str3, str4, 5);
	//printf("str1 after memcpy : %s\n", str3);

	return 0; 
}
*/