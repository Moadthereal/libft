/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: majnaou <majnaou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/17 13:10:24 by majnaou           #+#    #+#             */
/*   Updated: 2026/10/26 11:06:41 by majnaou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long	nb;
	char	*arr;

	nb = (long)n;
	if (n < 0)
	{
		nb *= -1;
		write(fd, "-", 1);
	}
	arr = "0123456789";
	if (nb >= 10)
		ft_putnbr_fd(nb / 10, fd);
	write(fd, &arr[nb % 10], 1);
}
