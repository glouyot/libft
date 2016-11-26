/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glouyot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/04 19:56:14 by glouyot           #+#    #+#             */
/*   Updated: 2016/11/07 20:14:05 by glouyot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strncpy(char *dst, char const *src, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (*src)
			dst[i] = *src++;
		else
			dst[i] = '\0';
		i++;
	}
	return (dst);
}
