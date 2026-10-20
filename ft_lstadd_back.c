/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: majnaou <majnaou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/19 08:48:35 by majnaou           #+#    #+#             */
/*   Updated: 2026/10/19 10:41:55 by majnaou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list *tmp;
	if (!new || !lst)
		return ;

	tmp = ft_lstlast(*lst);
	tmp->next = new;
	new->next = NULL;
}
/*
int main()
{
	t_list	*node;
	t_list	*node1;
	t_list	*node2;
	t_list	*new;
	int n;
	n = 0;

	node = ft_lstnew("a");
	node1 = ft_lstnew("b");
	node2 = ft_lstnew("v");
	new = ft_lstnew("x");
	node->next = node1;
	node1->next = node2;
	printf("%d\n", ft_lstsize(node));
	ft_lstadd_back(&node, new);
	printf("%d\n", ft_lstsize(node));
	free(node);
	free(node1);
	free(node2);
	free(new);

}
*/
