/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glouyot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/13 16:39:34 by glouyot           #+#    #+#             */
/*   Updated: 2016/12/13 19:36:19 by glouyot          ###   ########.fr       */
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
	DEBUG;
	while (ft_pow(ft_strlen(base), i) <= (neg ? -l : l))
	{
		ft_putnbr(i);
		ft_putendl("");
		i++;
	}
	DEBUG;
	ret = (neg) ? ft_strnew(8 * (i / 8 + 1)) : ft_strnew(i);
	if (!ret)
		return (NULL);
	if (neg)
	{
		i = (8 * (i / 8 + 1));
	}
	while (i > 0)
	{
		ret[i - 1] = base[l % ft_strlen(base)];
		i--;
		l = l / ft_strlen(base);
	}
	return (ret);
}
