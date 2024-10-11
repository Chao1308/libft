/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clin-yan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 15:32:11 by clin-yan          #+#    #+#             */
/*   Updated: 2024/10/05 15:07:12 by clin-yan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *scr, size_t n)
{
	char	*tmp_dest;
	char	*tmp_scr;
	size_t	i;

	i = 0;
	if (!dest && !scr)
		return (NULL);
	tmp_dest = (char *) dest;
	tmp_scr = (char *) scr;
	if (tmp_dest > tmp_scr)
	{
		while (n-- > 0)
		{
			tmp_dest[n] = tmp_scr[n];
		}
	}
	else
	{
		while (i++ < n)
		{
			tmp_dest[i - 1] = tmp_scr[i - 1];
		}
	}
	return (dest);
}
