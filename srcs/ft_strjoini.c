/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoini.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glouyot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/25 19:34:22 by glouyot           #+#    #+#             */
/*   Updated: 2016/11/25 19:37:12 by glouyot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strjoini(char const *s1, char const *s2, int f)
{
	char	*to;

	if (!s1 || !s2)
		return (NULL);
	if (!(to = ft_strnew(ft_strlen(s1) + ft_strlen(s2))))
		return (NULL);
	to = ft_strcat(to, s1);
	to = ft_strcat(to, s2);
	to[ft_strlen(to) + 1] = '\0';
	if (f == 1 || f == 3)
		free(s1);
	if (f == 2 || f == 3)
		free(s2);
	return (to);
}
