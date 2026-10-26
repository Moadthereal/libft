/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: majnaou <majnaou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/14 10:52:44 by majnaou           #+#    #+#             */
/*   Updated: 2026/10/25 11:37:22 by majnaou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_min(size_t len, size_t av_char)
{
	if (len > av_char)
		return (av_char);
	else
		return (len);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	i;
	size_t	s_len;
	size_t	av_char;
	size_t	ac_char;

	if (!s)
		return (ft_strdup(""));
	s_len = ft_strlen(s);
	if (start >= s_len || s_len == 0 || len == 0)
	{
		sub = ft_strdup("");
		return (sub);
	}
	av_char = s_len - start;
	ac_char = ft_min(len, av_char);
	sub = (char *)malloc((ac_char * sizeof(char)) + 1);
	if (!sub)
		return (NULL);
	i = 0;
	while (i < ac_char)
		sub[i++] = s[start++];
	sub[i] = '\0';
	return (sub);
}
