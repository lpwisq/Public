/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpwi <lpwi@student.42singapore.sg>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 15:53:49 by lpwi              #+#    #+#             */
/*   Updated: 2024/05/19 15:26:14 by lpwi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *str)
{
	int	i;
	int	sign;
	int	number;

	i = 0;
	sign = 1;
	number = 0;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = sign * (-1);
		i++;
	}
	while (str[i] >= 48 && str[i] <= 57)
	{
		number = number * 10 + str[i] - '0';
		i++;
	}
	return (number * sign);
}
/*
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	char *str = "   34riff";
	int p = ft_atoi(str);
	printf("ft_atoi: %i\n", p);
	int q = atoi(str);
	printf("atoi: %i\n", q);
}
*/