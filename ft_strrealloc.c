/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrealloc.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glouyot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/14 12:05:41 by glouyot           #+#    #+#             */
/*   Updated: 2016/11/14 13:29:04 by glouyot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strrealloc(char *src, size_t s)
{
	char	*tmp;

	if (!(tmp = ft_strnew(size)))
		return (NULL);
	tmp = ft_strcat(tmp, src);
	src = tmp;
	free(tmp);
	return (src);
}
