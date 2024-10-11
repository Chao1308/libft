/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clin-yan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/29 12:40:13 by clin-yan          #+#    #+#             */
/*   Updated: 2024/10/05 14:54:53 by clin-yan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*cs1;
	unsigned char	*cs2;
	size_t			i;

	cs1 = (unsigned char *) s1;
	cs2 = (unsigned char *) s2;
	i = 0;
	while (i < n)
	{
		if ((unsigned char) cs1[i] != (unsigned char) cs2[i])
			return ((unsigned char) cs1[i] - (unsigned char) cs2[i]);
		i++;
	}
	return (0);
}
