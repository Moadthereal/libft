/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: majnaou <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/15 18:54:27 by majnaou           #+#    #+#             */
/*   Updated: 2026/10/17 13:16:30 by majnaou          ###   ########.fr       */
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

static void	free_mem(char **arr, size_t i)
{
	while (i > 0)
		free(arr[--i]);
}

char	**ft_split(char const *s, char c)
{
	char	**ptr;
	size_t	i;

	ptr = (char **)malloc((count_words(s, c) + 1) * sizeof(char *));
	if (!ptr)
		return (NULL);
	i = 0;
	while (*s)
	{
		while (*s && *s == c)
			s++;
		if (*s && *s != c)
		{
			ptr[i] = malloc_word(s, c);
			if (ptr[i] == NULL)
			{
				free_mem(ptr, i);
				free(ptr);
				return (NULL);
			}
			i++;
			while (*s && *s != c)
				s++;
		}
	}
	ptr[i] = NULL;
	return (ptr);
}
