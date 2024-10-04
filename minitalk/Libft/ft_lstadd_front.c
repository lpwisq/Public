/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpwi <lpwi@student.42singapore.sg>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 10:22:01 by lpwi              #+#    #+#             */
/*   Updated: 2024/05/29 10:22:24 by lpwi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_lstadd_front(t_list **lst, t_list *new)
{
	new->next = *lst;
	*lst = new;
	return (lst);
}
/*
#include <stdio.h>
int main()
{
	int q = 45;
	void *x = &q;
	t_list *new = ft_lstnew(x);
	printf("new %d\n", *(int *)new->content);

	// int p = 98;
	// void *y = &p;
	t_list *lst1 = NULL;
	//ft_lstnew(y);
	//printf("lst %d\n", *(int *)lst1->content);

	//t_list **lst2 = &lst1;
	ft_lstadd_front(&lst1, new);
	while(lst1 != NULL)
	{
		printf("current %d\n", *(int *)lst1->content);
		lst1 = lst1->next;
	}
}
*/