/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_two_comp.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glouyot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/12 17:53:52 by glouyot           #+#    #+#             */
/*   Updated: 2016/12/14 13:56:48 by glouyot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char				*ft_two_comp(signed int n)
{
	char			*s;
	unsigned int	i;
	int				j;

	i = (2 << 16) - n;
	j = 0;
	s = ft_strnew(16);
	while (j < 16)
	{
		s[15 - j] = ((i & 1) == 0) ? '0' : '1';
		i = i >> 1;
		j++;
	}
	s[16] = '\0';
	ft_putendl(s);
	return (s);
}
