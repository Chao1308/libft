/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clin-yan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 17:06:13 by clin-yan          #+#    #+#             */
/*   Updated: 2024/10/06 12:22:46 by clin-yan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	trim(const char *set, char c);
static char	*res_str(const char *s1, size_t start, size_t l);

char	*ft_strtrim(char const *s1, char const *set)
{
	int	i;
	int	l;

	i = 0;
	l = ft_strlen(s1) - 1;
	if (ft_strlen(s1) == 0)
		return (ft_strdup(""));
	while (trim(set, s1[i]))
		i++;
	while (trim(set, s1[l]))
		l--;
	return (res_str(s1, i, l - i + 1));
}

static int	trim(const char *set, char c)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

static char	*res_str(const char *s1, size_t start, size_t l)
{
	char	*str;
	size_t	i;

	if (l <= 0 || start >= ft_strlen(s1))
		return (ft_strdup(""));
	str = ft_calloc(l + 1, sizeof(char));
	if (!str)
		return (NULL);
	i = 0;
	while (i < l)
	{
		str[i] = s1[start + i];
		i++;
	}
	return (str);
}
