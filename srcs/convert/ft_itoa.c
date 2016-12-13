/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glouyot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/09 13:24:49 by glouyot           #+#    #+#             */
/*   Updated: 2016/12/13 18:10:51 by glouyot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_itoa(int n)
{
	char		*ret;
	long		l;
	size_t		i;
	char		neg;

	l = n;
	neg = (l < 0 ? 1 : 0);
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
