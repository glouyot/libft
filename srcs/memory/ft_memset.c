/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glouyot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/04 14:32:00 by glouyot           #+#    #+#             */
/*   Updated: 2016/11/04 16:20:48 by glouyot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memset(void *block, int c, size_t size)
{
	t_byte	*tmp;

	tmp = block;
	while (size--)
		*(tmp++) = (t_byte)(c);
	return (block);
}
