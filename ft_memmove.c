/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: majnaou <majnaou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 18:47:11 by majnaou           #+#    #+#             */
/*   Updated: 2026/10/22 10:35:24 by majnaou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*c_src;
	char	*c_dest;

	c_src = (char *)src;
	c_dest = (char *)dest;
	if (c_dest > c_src)
	{
		while (n--)
			c_dest[n] = c_src[n];
	}
	else
		ft_memcpy(dest, src, n);
	return (dest);
}
