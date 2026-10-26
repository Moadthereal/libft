/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: majnaou <majnaou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 15:33:04 by majnaou           #+#    #+#             */
/*   Updated: 2026/10/25 09:55:47 by majnaou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	char	*ptr;
	size_t	i;

	if (n == 0)
		return (s);
	ptr = (char *)s;
	i = 0;
	while (i < n)
		ptr[i++] = (char)c;
	return ((void *)ptr);
}
