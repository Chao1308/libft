/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clin-yan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/29 12:23:00 by clin-yan          #+#    #+#             */
/*   Updated: 2024/10/05 15:26:04 by clin-yan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	cc;
	unsigned char	*cs;
	size_t			i;

	cc = (unsigned char) c;
	cs = (unsigned char *) s;
	i = 0;
	while (i < n)
	{
		if (cs[i] == cc)
			return ((void *) &cs[i]);
		i++;
	}
	return (NULL);
}
