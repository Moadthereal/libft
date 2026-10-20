/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: majnaou <majnaou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/18 09:25:56 by majnaou           #+#    #+#             */
/*   Updated: 2026/10/19 10:47:24 by majnaou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	new->next = *lst;
	*lst = new;

}
/*#include <stdlib.h>
typedef struct s_list
{
    void    *content;
    struct s_list            *next;
}    t_list;
void    ft_lstadd_front(t_list **lst, t_list *new)
{
    new->next = *lst;
    *lst = new;

}

t_list    *ft_lstnew(void *content)
{
    t_list    *rote;

    rote = malloc(sizeof(t_list));
    if(!rote)
        return (NULL);
    rote->content = content;
    rote->next = NULL;
    return (rote);
}
int main()
{
    t_list    *node;
    t_list    *node1;
    t_list    *node2;
    int    a = 10;
    int    b = 20;
    t_list    *new;

    new = ft_lstnew(&b);
    node = ft_lstnew(&a);
    node1 = ft_lstnew(&a);
    node2 = ft_lstnew(&a);
    node->next = node1;
    node1->next = node2;
    ft_lstadd_front(&node, new);


}
*/
