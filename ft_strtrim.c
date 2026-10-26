/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: majnaou <majnaou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/15 16:02:17 by majnaou           #+#    #+#             */
/*   Updated: 2026/10/25 11:38:35 by majnaou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_remove(char c, char const *set)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	char	*ptr;

	if (!s1 && !set)
		return (ft_strdup(""));
	start = 0;
	while (s1[start] && ft_remove(s1[start], set))
		start++;
	end = ft_strlen(s1) - 1;
	while (end > start && ft_remove(s1[end], set))
		end--;
	ptr = ft_substr(s1, start, (end - start) + 1);
	return (ptr);
}
