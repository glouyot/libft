/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_countwords.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glouyot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/10 10:24:43 by glouyot           #+#    #+#             */
/*   Updated: 2016/11/10 12:01:50 by glouyot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t			ft_countwords(char *s, char c)
{
	size_t		count;
	int			i;

	i = 0;
	count = 0;
	while (s[i] != '\0' && s[i] == c)
		i++;
	while (s[i] != '\0')
	{
		while (s[i] != '\0' && s[i] != c)
			i++;
		count++;
		while (s[i] != '\0' && s[i] == c)
			i++;
	}
	return (count);
}
