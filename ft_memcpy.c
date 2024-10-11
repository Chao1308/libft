/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clin-yan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 14:58:39 by clin-yan          #+#    #+#             */
/*   Updated: 2024/10/05 14:37:25 by clin-yan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *scr, size_t n)
{
	unsigned char	*tmp_dest;
	unsigned char	*tmp_scr;

	if (dest == (void *)0 && scr == (void *)0)
		return (dest);
	tmp_dest = (unsigned char *)dest;
	tmp_scr = (unsigned char *)scr;
	while (n > 0)
	{
		*(tmp_dest++) = *(tmp_scr++);
		n--;
	}
	return (dest);
}
