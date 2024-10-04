/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpwi <lpwi@student.42singapore.sg>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 14:34:04 by lpwi              #+#    #+#             */
/*   Updated: 2024/05/29 16:40:32 by lpwi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		count;
	t_list	*temp;

	count = 0;
	temp = lst;
	while (temp != NULL)
	{
		count++;
		temp = temp->next;
	}
	return (count);
}
/*
#include <stdio.h>
#include "libft.h"
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
    int j = ft_lstsize(lst1);
    printf("count %d\n", j);
}
*/
