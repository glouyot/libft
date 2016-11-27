/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrealloc.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glouyot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/14 12:05:41 by glouyot           #+#    #+#             */
/*   Updated: 2016/11/26 11:31:22 by glouyot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char		*ft_strrealloc(char *src, size_t s)
{
	char	*tmp;

	if (!(tmp = ft_strnew(s)))
		return (NULL);
	tmp = ft_strcat(tmp, src);
	src = tmp;
	free(tmp);
	return (src);
}
