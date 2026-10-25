/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: majnaou <majnaou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 18:47:11 by majnaou           #+#    #+#             */
/*   Updated: 2026/10/25 06:02:28 by majnaou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*c_src;
	unsigned char	*c_dest;

	c_src = (unsigned char *)src;
	c_dest = (unsigned char *)dest;
	if (dest == src)
		return (NULL);
	if (c_dest > c_src)
	{
		while (n--)
			c_dest[n] = c_src[n];
	}
	else
		ft_memcpy(dest, src, n);
	return (dest);
}
#include <string.h>
int main()
{
	//  ft_memmove("abc", "ern", 1);
	 ft_memmove("NULL", "NULL", 1);
	//  memmove("NULL", "NULL", 1);
	// memmove("av", "av", 1);
	// memmove("", "", 1);
}
