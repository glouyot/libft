/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glouyot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/05 13:17:43 by glouyot           #+#    #+#             */
/*   Updated: 2016/11/05 14:37:11 by glouyot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strncat(char *dst, char const *src, size_t n)
{
	size_t	s;
	int		i;

	i = 0;
	s = ft_strlen(dst);
	while (src[i] != '\0' && n--)
	{
		dst[s + i] = src[i];
		i++;
	}
	dst[s + i] = '\0';
	return (dst);
}
