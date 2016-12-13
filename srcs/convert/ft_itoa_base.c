/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glouyot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/13 16:39:34 by glouyot           #+#    #+#             */
/*   Updated: 2016/12/13 17:40:22 by glouyot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char				*ft_itoa_base(int n, char *base)
{
	char			*ret;
	long long		l;
	size_t			i;
	char			neg;

	l = n;
	i = 1;
	neg = (l < 0);
	while (ft_pow(ft_strlen(base), i) <= n)
		i++;
	ft_putnbr(i);
	ret = ft_strnew(8);
	if (!ret)
		return (NULL);
	if (neg)
	{
		l = -l;
		ret[0] = '-';
	}
	while (i > 0)
	{
		ret[i + neg - 1] = base[l % ft_strlen(base)];
		i--;
		l = l / ft_strlen(base);
	}
	return (ret);
}
