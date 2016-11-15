/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glouyot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/04 18:59:12 by glouyot           #+#    #+#             */
/*   Updated: 2016/11/04 19:19:22 by glouyot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char		*ft_strdup(const char *s)
{
	char	*dup;
	size_t	i;

	dup = (char *)malloc(sizeof(char) * ft_strlen(s) + 1);
	if (dup)
	{
		i = 0;
		while (i < ft_strlen(s))
		{
			dup[i] = s[i];
			i++;
		}
		dup[i] = '\0';
	}
	else
		return (NULL);
	return (dup);
}
