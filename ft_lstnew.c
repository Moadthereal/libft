/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: majnaou <majnaou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/17 17:39:39 by majnaou           #+#    #+#             */
/*   Updated: 2026/10/28 06:03:34 by majnaou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*rote;

	rote = malloc(sizeof(t_list));
	if (!rote)
		return (NULL);
	rote->content = content;
	rote->next = NULL;
	return (rote);
}
