/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: majnaou <majnaou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 16:54:32 by majnaou           #+#    #+#             */
/*   Updated: 2026/11/03 14:42:49 by majnaou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*tmp_dest;
	unsigned char	*tmp_src;
	size_t			i;

	if (dest == src && dest != NULL)
		return (dest);
	tmp_src = (unsigned char *)src;
	tmp_dest = (unsigned char *)dest;
	i = 0;
	while (i < n)
		tmp_dest[i++] = *tmp_src++;
	return ((void *)dest);
}
