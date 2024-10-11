/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clin-yan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 11:17:04 by clin-yan          #+#    #+#             */
/*   Updated: 2024/10/08 14:51:42 by clin-yan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_words(const char *s, char c);
static char		*make_word(const char **s, char c);
static void		free_split(char **split, size_t size);
static char		**fill_split(char **split, const char *s, char c);

char	**ft_split(char const *s, char c)
{
	char	**split;
	size_t	words;

	if (!s)
		return (NULL);
	words = count_words(s, c);
	split = (char **)malloc(sizeof(char *) * (words + 1));
	if (!split)
		return (NULL);
	return (fill_split(split, s, c));
}

static size_t	count_words(const char *s, char c)
{
	size_t	count;

	count = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s)
			count++;
		while (*s && *s != c)
			s++;
	}
	return (count);
}

static char	*make_word(const char **s, char c)
{
	const char	*start;
	size_t		len;

	start = *s;
	while (**s && **s != c)
		(*s)++;
	len = *s - start;
	return (ft_substr(start, 0, len));
}

static void	free_split(char **split, size_t size)
{
	while (size--)
		free(split[size]);
	free(split);
}

static char	**fill_split(char **split, const char *s, char c)
{
	size_t	i;
	char	*word;

	i = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s)
		{
			word = make_word(&s, c);
			if (!word)
			{
				free_split(split, i);
				return (NULL);
			}
			split[i] = word;
			i++;
		}
	}
	split[i] = NULL;
	return (split);
}
