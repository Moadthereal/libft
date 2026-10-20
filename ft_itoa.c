/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: majnaou <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/16 10:08:05 by majnaou           #+#    #+#             */
/*   Updated: 2026/10/16 18:09:21 by majnaou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	n_len(int n)
{
	if (n == 0)
		return (0);
	return (n_len(n / 10) + 1);
}

char	*ft_itoa(int n)
{
	char	*p;
	int		size;
	long	nb;

	nb = (long)n;
	if (nb == 0)
		return (ft_strdup("0"));
	size = n_len(n);
	if (n < 0)
	{
		size += 1;
		nb *= -1;
	}
	p = malloc(size + 1);
	if (!p)
		return (NULL);
	p[size--] = '\0';
	while (nb > 0)
	{
		p[size--] = (nb % 10) + '0';
		nb = nb / 10;
	}
	if (n < 0)
		p[0] = '-';
	return (p);
}
