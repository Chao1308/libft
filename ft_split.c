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

static size_t	count_words(char const *s, char c);
static char		*substring(char const *str, int start, int finish);

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	j;
	int		index;
	char	**result;

	result = ft_calloc((count_words(s, c) + 1), sizeof(char *));
	if (!s || !result)
		return (0);
	i = 0;
	j = 0;
	index = -1;
	while (i <= ft_strlen(s))
	{
		if (s[i] != c && index < 0)
			index = i;
		else if ((s[i] == c || i == ft_strlen(s)) && index >= 0)
		{
			result[j] = substring(s, index, i);
			index = -1;
			j++;
		}
		i++;
	}
	result[j] = 0;
	return (result);
}

static size_t	count_words(char const *s, char c)
{
	int	i;
	int	count;
	int	x;

	i = 0;
	count = 0;
	while (s[i])
	{
		x = 1;
		if (s[i] != c && x == 0)
		{
			x = 1;
			count++;
		}
		else if (s[i] == c)
			x = 0;
		i++;
	}
	return (count);
}

static char	*substring(char const *str, int start, int finish)
{
	char	*copy;
	int		i;

	i = 0;
	copy = ft_calloc((finish - start + 1), sizeof(char));
	if (!word)
		return (NULL);
	while (start < finish)
	{
		copy[i] = str[start];
		i++;
		start++;
	}
	copy[i] = '\0';
	return (copy);
}
