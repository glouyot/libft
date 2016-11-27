/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glouyot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/04 15:31:38 by glouyot           #+#    #+#             */
/*   Updated: 2016/11/10 13:35:23 by glouyot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memcpy(void *to, void const *from, size_t size)
{
	t_byte	*tmp;

	tmp = to;
	while (size--)
		*(tmp++) = *(t_byte *)(from++);
	return (to);
}
