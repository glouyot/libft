/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glouyot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 13:51:16 by glouyot           #+#    #+#             */
/*   Updated: 2016/11/11 10:19:18 by glouyot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strjoin(char const *s1, char const *s2)
{
	char	*to;

	if (!s1 || !s2)
		return (NULL);
	if (!(to = ft_strnew(ft_strlen(s1) + ft_strlen(s2))))
		return (NULL);
	to = ft_strcat(to, s1);
	to = ft_strcat(to, s2);
	to[ft_strlen(to) + 1] = '\0';
	return (to);
}
