/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glouyot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/04 16:19:41 by glouyot           #+#    #+#             */
/*   Updated: 2016/11/09 16:42:14 by glouyot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memccpy(void *to, void const *from, int c, size_t size)
{
	t_byte	*tmp;
	char	*s;
	size_t	i;

	i = 0;
	tmp = (t_byte *)to;
	s = (char *)from;
	while (i < size)
	{
		tmp[i] = (t_byte)(s[i]);
		if (tmp[i] == (t_byte)c)
			return (&tmp[i + 1]);
		i++;
	}
	return (NULL);
}
