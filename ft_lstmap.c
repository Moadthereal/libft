/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: majnaou <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 07:02:51 by majnaou           #+#    #+#             */
/*   Updated: 2026/10/20 08:15:14 by majnaou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


// striter --> Iterates through the list ’lst’ and applies the
//function ’f’ to the content of each node.

/*ft_lstnew --> Allocates memory (using malloc(3)) and returns a new node. The ’content’ member variable is */

//ft_lstsize --> Count the number of nodes in the list

/*ft_lstclear --> Deletes and frees the given node and all its
	successors, using the function ’del’ and free(3).
	Finally, set the pointer to the list to NULL */

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *))
{
	t_list	*tmp;
	t_list	*lst1;
		

	if (!f || !lst || !del)
		return (ft_strdrp(" "));
	lst1 = lst;
	while (lst)
	{
		tmp = lst;
		lst = lst->next;
		tmp = ft_lstiter();	
		
		
		
		
