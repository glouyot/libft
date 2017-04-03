/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glouyot <glouyot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/03 14:17:04 by glouyot           #+#    #+#             */
/*   Updated: 2017/04/03 15:14:04 by glouyot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_nb_digit(long long n)
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
	neg = l < 0;
	i = ft_nb_digit(l);
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
