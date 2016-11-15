/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glouyot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 13:57:54 by glouyot           #+#    #+#             */
/*   Updated: 2016/11/10 09:45:05 by glouyot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strtrim(char const *s)
{
	char	*dst;
	size_t	i;
	size_t	a;

	if (!s)
		return (NULL);
	a = 0;
	i = ft_strlen(s);
	while (ft_isspace(s[a]))
		a++;
	while (ft_isspace(s[i - 1]))
		i--;
	if (i < a)
		i = a;
	if (!(dst = ft_strnew(i - a)))
		return (NULL);
	return (ft_strncpy(dst, s + a, i - a));
}
