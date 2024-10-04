/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpwi <lpwi@student.42singapore.sg>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 14:35:45 by lpwi              #+#    #+#             */
/*   Updated: 2024/05/30 11:46:18 by lpwi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*temp;

	temp = lst;
	if (temp == NULL)
		return (NULL);
	while ((temp->next) != NULL)
		temp = temp->next;
	return (temp);
}
/*
#include "libft.h"
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
	
	// while(lst1 != NULL)
	// {
	// 	printf("current %d\n", *(int *)lst1->content);
	// 	lst1 = lst1->next;
	// }
	t_list *k;
	k = ft_lstlast(lst1);
	printf("lstlast %d\n", *(int *)(k->content));
}
*/
