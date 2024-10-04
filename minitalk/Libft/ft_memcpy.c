/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpwi <lpwi@student.42singapore.sg>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/03 15:32:58 by lpwi              #+#    #+#             */
/*   Updated: 2024/05/19 14:06:37 by lpwi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	int			i;
	char		*ptr;
	const char	*ptr_src;

	if (!dest && !src)
		return (NULL);
	i = 0;
	ptr = dest;
	ptr_src = src;
	while (n > 0)
	{
		ptr[i] = ptr_src[i];
		n--;
		i++;
	}
	dest = ptr;
	return (dest);
}
/*
#include <stdio.h>
#include <string.h>
int	main()
{
	// char str1[] = "Geeks";
	// char *str2 = "Quizzes";

	// printf("str1 before memcpy : %s\n", str1);
	
	// ft_memcpy(str1, str2, 5);
	// printf("\nstr1 after ft_memcpy : %s\n", str1);
	
	char str3[10] = "\0";
	char *str4 = ((void*)0);
	memcpy(str3, str4, 5);
	//printf("\nstr3 after memcpy : %s\n", str1);

	return 0; 
}
*/