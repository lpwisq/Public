/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpwi <lpwi@student.42singapore.sg>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 15:50:31 by lpwi              #+#    #+#             */
/*   Updated: 2024/05/29 16:38:44 by lpwi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*temp;

	temp = lst;
	while (temp != NULL)
	{
		f(temp->content);
		temp = temp ->next;
	}
}
/*
void	f(void *ptr)
{
	*(int *)ptr = 0;
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
	ft_lstiter(lst1, f);
	while(lst1 != NULL)
	{
		printf("current %d\n", *(int *)lst1->content);
		lst1 = lst1->next;
	}
}
*/
