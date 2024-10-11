/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clin-yan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/29 17:42:03 by clin-yan          #+#    #+#             */
/*   Updated: 2024/10/05 12:18:00 by clin-yan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*cp;
	size_t	i;

	cp = (char *) malloc(ft_strlen(s) + 1);
	i = 0;
	if (cp == NULL)
		return (NULL);
	while (s[i])
	{
		cp[i] = s[i];
		i++;
	}
	cp[i] = 0;
	return (cp);
}
