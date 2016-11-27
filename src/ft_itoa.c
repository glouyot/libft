/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glouyot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/09 13:24:49 by glouyot           #+#    #+#             */
/*   Updated: 2016/11/11 09:34:08 by glouyot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_max(long n)
{
	size_t		r;

	r = 1;
	if (n < 0)
		n = -n;
	while (n >= 10)
	{
		n = n / 10;
		r++;
	}
	return (r);
}

char			*ft_itoa(int n)
{
	char		*ret;
	long		l;
	size_t		i;
	char		neg;

	l = n;
	neg = (l < 0 ? 1 : 0);
	i = ft_max(l);
	ret = ft_strnew(i + neg);
	if (!ret)
		return (NULL);
	if (neg)
	{
		l = -l;
		ret[0] = '-';
	}
	while (i > 0)
	{
		ret[i + neg - 1] = (l % 10) + 48;
		i--;
		l = l / 10;
	}
	return (ret);
}
