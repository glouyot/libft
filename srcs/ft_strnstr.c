/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glouyot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/05 16:25:22 by glouyot           #+#    #+#             */
/*   Updated: 2016/11/08 16:07:53 by glouyot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strnstr(char const *src, char const *find, size_t n)
{
	char	*tmp;
	size_t	i;

	i = 0;
	tmp = (char *)src;
	while (tmp[i] != '\0' && i < n)
	{
		if (tmp[i] == find[0])
			if (ft_strlen(find) + i <= n)
				if (ft_strncmp(&tmp[i], find, ft_strlen(find)) == 0)
					return (&tmp[i]);
		i++;
	}
	if (find[0] == '\0')
		return (tmp);
	return (NULL);
}
