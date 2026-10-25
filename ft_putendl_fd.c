/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: majnaou <majnaou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/17 11:27:57 by majnaou           #+#    #+#             */
/*   Updated: 2026/10/25 05:57:22 by majnaou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	ft_putstr_fd(s, fd);
	write(fd, "\n", 1);
}

#include <fcntl.h>
int main()
{
	int fd = open("txt.txt", O_RDWR);
	if (fd == -1)
		return (1);

	write(fd, "** hello 1337", 14);
	write(fd, " **  \n", 7);
	close(fd);
	return (0);
}
