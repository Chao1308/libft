/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clin-yan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 15:59:51 by clin-yan          #+#    #+#             */
/*   Updated: 2024/10/05 14:31:15 by clin-yan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *scr, size_t n)
{
	size_t	scr_len;

	scr_len = ft_strlen(scr);
	if (scr_len + 1 < n)
	{
		ft_memcpy(dest, scr, scr_len + 1);
	}
	else if (n != 0)
	{
		ft_memcpy(dest, scr, n - 1);
		dest[n - 1] = 0;
	}
	return (scr_len);
}
