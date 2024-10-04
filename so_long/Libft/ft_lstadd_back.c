/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpwi <lpwi@student.42singapore.sg>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 14:55:47 by lpwi              #+#    #+#             */
/*   Updated: 2024/05/30 13:55:09 by lpwi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*temp;
	t_list	*lastnode;

	temp = *lst;
	lastnode = ft_lstlast(temp);
	if (*lst == NULL)
		ft_lstadd_front(lst, new);
	else
		lastnode->next = new;
}
/*
#include "libft.h"
#include <stdio.h>
int main()
{
	// int q = 45;
	// void *x = &q;
	// t_list *new = ft_lstnew(x);
	// printf("new %d\n", *(int *)new->content);

	t_list *lst1 = NULL;
	//lst1->next = new;

	int r = 100;
	void *z = &r;
	t_list *new2 = ft_lstnew(z);
	ft_lstadd_back(&lst1, new2);

	
	while(lst1 != NULL)
	{
		printf("current %d\n", *(int *)lst1->content);
		lst1 = lst1->next;
	}
}
*/
