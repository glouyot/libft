/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glouyot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/05 13:08:17 by glouyot           #+#    #+#             */
/*   Updated: 2016/11/05 13:16:55 by glouyot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strcat(char *dst, char const *src)
{
	size_t	s;
	int		i;

	i = 0;
	s = ft_strlen(dst);
	while (src[i] != '\0')
	{
		dst[s + i] = src[i];
		i++;
	}
	dst[s + i] = '\0';
	return (dst);
}
