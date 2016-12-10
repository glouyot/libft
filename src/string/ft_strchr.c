/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glouyot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/05 15:28:12 by glouyot           #+#    #+#             */
/*   Updated: 2016/11/08 15:17:15 by glouyot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strchr(char const *s, int c)
{
	char	*tmp;
	size_t	i;

	tmp = (char *)s;
	i = 0;
	while (s[i] != '\0')
	{
		if ((t_byte)c == (t_byte)tmp[i])
			return (&tmp[i]);
		i++;
	}
	if ((t_byte)c == (t_byte)tmp[i])
		return (&tmp[i]);
	return (NULL);
}
