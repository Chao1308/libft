/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clin-yan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/06 14:10:45 by clin-yan          #+#    #+#             */
/*   Updated: 2024/10/06 15:59:50 by clin-yan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count(long n);
static char	*alloc(int l);

char	*ft_itoa(int n)
{
	int		l;
	int		i;
	char	*result;
	long	nbr;

	nbr = n;
	l = count(nbr);
	result = alloc(l);
	if (!result)
		return (NULL);
	if (nbr < 0)
		nbr *= -1;
	i = l - 1;
	while (nbr != 0)
	{
		result[i] = ((nbr % 10) + 48);
		nbr = nbr / 10;
		i--;
	}
	if (n < 0)
		result[0] = '-';
	result[l] = 0;
	return (result);
}

static int	count(long n)
{
	int	count;

	count = 0;
	if (n < 0)
	{
		count++;
		n = -n;
	}
	if (n == 0)
		count++;
	while (n != 0)
	{
		n = n / 10;
		count++;
	}
	return (count);
}

static char	*alloc(int l)
{
	char	*tmp;

	tmp = malloc((l + 1) * sizeof(char));
	if (!tmp)
		return (NULL);
	tmp[0] = '0';
	return (tmp);
}
