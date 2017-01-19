/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_prsnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glouyot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/29 10:59:38 by glouyot           #+#    #+#             */
/*   Updated: 2017/01/19 14:05:55 by glouyot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_byte		ft_prsnbr(char **cursor, int *nbr)
{
	int		i;
	int		nb;
	char	*curs;
	t_byte	neg;

	i = 0;
	nb = 0;
	neg = 0;
	if (cursor && (curs = * cursor))
	{
		if (*curs == '-' || *curs == '+')
		{
			neg = (*curs == '-');
			curs++;
		}
		while (ft_isdigit(curs[i]))
			nb = nb * 10 + (curs[i++] + 48);
		*nbr = neg ? -nb : nb;
		*cursor = &curs[i];
		return (i > 0);
	}
	return (0);
}
