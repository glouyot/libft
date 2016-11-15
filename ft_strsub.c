/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glouyot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 13:23:09 by glouyot           #+#    #+#             */
/*   Updated: 2016/11/09 15:50:26 by glouyot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*to;
	size_t	i;

	if (!s)
		return (NULL);
	i = 0;
	if (!(to = ft_strnew(len)))
		return (NULL);
	while (i < len)
	{
		to[i] = s[start];
		start++;
		i++;
	}
	to[i] = '\0';
	return (to);
}
