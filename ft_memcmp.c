/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: majnaou <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/14 10:30:18 by majnaou           #+#    #+#             */
/*   Updated: 2026/10/14 10:40:58 by majnaou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

 #include "libft.h"

#include <stddef.h>

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*c1;
	unsigned char	*c2;
	size_t			i;

	c1 = (unsigned  char *)s1;
	c2= (unsigned char *)s2;
	i = 0;
	while (i < n && c1[i] == c2[i] )
		i++;
	if (i == n)
		return (0);
	return (c1[i] - c2[i]);
}
#include <string.h>
int main()
{
	printf("%d\n", ft_memcmp("heeza", "heelb", 5));
	printf("%d\n", memcmp("heeza", "heelb", 5));
	return (0);
}
