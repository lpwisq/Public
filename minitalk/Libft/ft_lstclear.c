/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpwi <lpwi@student.42singapore.sg>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 15:31:12 by lpwi              #+#    #+#             */
/*   Updated: 2024/05/29 15:34:18 by lpwi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*temp;

	while (*lst != NULL)
	{
		temp = (*lst)->next;
		ft_lstdelone(*lst, del);
		(*lst) = temp;
	}
}
/*
void	del(void *content)
{
	content = NULL;
}

#include <stdio.h>
int main()
{
	int q = 45;
	void *x = &q;
	t_list *new = ft_lstnew(x);
	printf("new %d\n", *(int *)new->content);

	int p = 98;
	void *y = &p;
	t_list *lst1 = ft_lstnew(y);
	printf("lst %d\n", *(int *)lst1->content);

	t_list **lst2 = &lst1;
	ft_lstadd_front(lst2, new);
	ft_lstclear(lst2, del);
	printf("hello\n");
	printf("*lst2 %d\n", *(int *)lst1->content);
	
}
*/