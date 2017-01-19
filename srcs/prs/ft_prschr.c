/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_prschr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glouyot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/29 10:59:07 by glouyot           #+#    #+#             */
/*   Updated: 2017/01/18 13:34:57 by glouyot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int		ft_prschr(char **cursor, char c)
{
	unsigned int	n;
	char			*curs;

	n = 0;
	if (cursor && (curs = *cursor) && c)
	{
		while (*curs == c)
		{
			curs++;
			n++;
		}
		*cursor = curs;
	}
	return (n);
}
