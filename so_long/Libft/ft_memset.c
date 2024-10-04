/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpwi <lpwi@student.42singapore.sg>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/03 15:32:58 by lpwi              #+#    #+#             */
/*   Updated: 2024/05/19 14:06:16 by lpwi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memset(void *s, int c, size_t n)
{
	int			i;
	char		*ptr;

	i = 0;
	ptr = s;
	while (n > 0)
	{
		ptr[i] = c;
		n--;
		i++;
	}
	s = ptr;
	return (s);
}
/*
#include <stdio.h>
#include <string.h>
int	main()
{
	char str[50] = "GeeksForGeeks is for programming geeks."; 
    	printf("\nBefore memset(): %s\n", str);
    	memset(str + 13, '.', 8*sizeof(char));
	printf("After memset():  %s\n", str); 
	ft_memset(str + 13, '.', 8*sizeof(char));
	printf("After ft_memset():  %s\n", str); 
    	return 0; 
}
*/
