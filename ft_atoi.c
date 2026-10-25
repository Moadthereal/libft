/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: majnaou <majnaou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 10:46:57 by majnaou           #+#    #+#             */
/*   Updated: 2026/10/24 17:51:10 by majnaou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isspace(char c)
{
	if ((c >= 9 && c <= 13) || c == 32)
		return (1);
	return (0);
}

static int	ft_limit(unsigned long result, int digit, int sign)
{
	unsigned long	limit;

	if (sign == -1)
		limit = (unsigned long)L_MAX + 1 ;
	else
		limit = (unsigned long)L_MAX;
	if (result > (limit - digit) / 10)
	{
		if (sign == 1)
			return (-1);
		return (0);
	}
	return (1);
}

int	ft_atoi(const char *str)
{
	unsigned long	result;
	size_t			i;
	int				sign;
	int				r;

	result = 0;
	i = 0;
	sign = 1;
	while (ft_isspace(str[i]))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (str[i] && str[i] >= '0' && str[i] <= '9')
	{
		r = ft_limit(result, (str[i] - '0'), sign);
		if (r != 1)
			return (r);
		result = result * 10 + (str[i] - '0');
		i++;
	}
	return ((int)(result * sign));
}
