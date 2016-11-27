/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memrealloc.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glouyot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/16 14:15:14 by glouyot           #+#    #+#             */
/*   Updated: 2016/11/27 15:46:45 by glouyot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memrealloc(void *block, size_t size)
{
	if (!(block))
		return (ft_memalloc(size));
	return (ft_memcpy(ft_memalloc(size), block, size));
}
