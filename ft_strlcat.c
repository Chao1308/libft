/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clin-yan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/29 11:01:48 by clin-yan          #+#    #+#             */
/*   Updated: 2024/10/05 14:42:14 by clin-yan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *scr, size_t n)
{
	size_t	scr_len;
	size_t	dest_len;

	scr_len = ft_strlen(scr);
	dest_len = ft_strlen(dest);
	if (dest_len >= n || n == 0)
		dest_len = n;
	if (dest_len == n)
		return (n + scr_len);
	if (scr_len < n - dest_len)
		ft_memcpy(dest + dest_len, scr, scr_len + 1);
	else
	{
		ft_memcpy(dest + dest_len, scr, n - dest_len - 1);
		dest[n - 1] = '\0';
	}
	return (dest_len + scr_len);
}
