/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clin-yan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/29 16:30:55 by clin-yan          #+#    #+#             */
/*   Updated: 2024/10/05 12:16:14 by clin-yan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <limits.h>

static int	ft_isspace(int c);

int	ft_atoi(const char *nptr)
{
	int			i;
	int			sign;
	long long	result;

	i = 0;
	sign = 1;
	result = 0;
	while (ft_isspace(nptr[i]))
		i++;
	if ((nptr[i] == '+' || nptr[i] == '-')
		&& (nptr[i + 1] != '+' || nptr[i + 1] != '-'))
		i++;
	if (nptr[i - 1] == '-')
		sign = -1;
	while (nptr[i] && nptr[i] >= '0' && nptr[i] <= '9')
	{
		result = 10 * result + (nptr[i] - '0');
		if (result * sign < INT_MIN)
			return (0);
		i++;
	}
	result = result * sign;
	return (result);
}

static int	ft_isspace(int c)
{
	if ((c >= 9 && c <= 13) || c == 32)
		return (1);
	return (0);
}
