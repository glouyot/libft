/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glouyot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/20 11:21:08 by glouyot           #+#    #+#             */
/*   Updated: 2017/03/20 11:33:25 by glouyot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memset(void *block, int c, size_t size)
{
	t_byte	*ret;

	ret = block;
	while (size--)
		*(ret++) = (t_byte)c;
	return (block);
}
