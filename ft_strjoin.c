/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clin-yan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 16:51:40 by clin-yan          #+#    #+#             */
/*   Updated: 2024/10/05 17:05:29 by clin-yan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	unsigned int	ls1;
	unsigned int	ls2;
	char			*join;
	int				i;
	int				j;

	ls1 = ft_strlen(s1);
	ls2 = ft_strlen(s2);
	i = 0;
	j = 0;
	join = malloc((ls1 + ls2 + 1) * sizeof(char));
	if (!join)
		return (NULL);
	while (s1[i])
		join[j++] = s1[i++];
	i = 0;
	while (s2[i])
		join[j++] = s2[i++];
	join[j] = 0;
	return (join);
}
