/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: majnaou <majnaou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/21 06:53:38 by majnaou           #+#    #+#             */
/*   Updated: 2026/10/22 08:17:20 by majnaou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(char const *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i] && s[i] != c)
		{
			count++;
			while (s[i] && s[i] != c)
				i++;
		}
	}
	return (count);
}

static char	*malloc_word(char const *s, char c)
{
	char	*ptr;
	size_t	i;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	ptr = (char *)malloc(i + 1);
	if (!ptr)
		return (NULL);
	i = 0;
	while (*s && *s != c)
		ptr[i++] = *s++;
	ptr[i] = '\0';
	return (ptr);
}

static void	free_mem(char **p, size_t i)
{
	while (i > 0)
		free(p[--i]);
}

static char	**free_sp(char **p, size_t i)
{
	free_mem(p, i);
	free(p);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char	**p;
	size_t	i;

	if (!s)
		return (NULL);
	p = (char **)malloc((count_words(s, c) + 1) * sizeof(char *));
	if (!p)
		return (NULL);
	i = 0;
	while (*s)
	{
		while (*s && *s == c)
			s++;
		if (*s)
		{
			p[i] = malloc_word(s, c);
			if (!p[i])
				return (free_sp(p, i));
			while (*s && *s != c)
				s++;
			i++;
		}
	}
	p[i] = NULL;
	return (p);
}
