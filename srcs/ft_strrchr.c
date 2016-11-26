/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glouyot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/05 15:33:33 by glouyot           #+#    #+#             */
/*   Updated: 2016/11/08 15:19:14 by glouyot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strrchr(char const *s, int c)
{
	char	*tmp;
	size_t	i;

	tmp = (char *)s;
	i = ft_strlen(s);
	while (i > 0)
	{
		if ((t_byte)c == (t_byte)tmp[i])
			return (&tmp[i]);
		i--;
	}
	if ((t_byte)c == (t_byte)tmp[i])
		return (&tmp[i]);
	return (NULL);
}
