/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glouyot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/04 17:08:44 by glouyot           #+#    #+#             */
/*   Updated: 2016/11/10 09:08:06 by glouyot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memmove(void *to, void const *src, size_t s)
{
	size_t	i;

	if (src < to)
	{
		i = s;
		while (i > 0)
		{
			i--;
			((char *)to)[i] = ((char *)src)[i];
		}
	}
	else
	{
		i = 0;
		while (i < s)
		{
			((char *)to)[i] = ((char *)src)[i];
			i++;
		}
	}
	return (to);
}
