/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_prschrs.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glouyot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/29 10:59:28 by glouyot           #+#    #+#             */
/*   Updated: 2017/01/19 15:28:05 by glouyot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_byte		ft_prschrs(char **cursor, char const *chrs)
{
	t_byte	counts;
	char	*fonds;
	char	*curs;

	counts = 0;
	curs = *cursor;
	if (chrs && cursor && ft_updiv(ft_strlen(chrs), 8) <= sizeof(t_byte))
	{
		while ((fonds = ft_strchr(chrs, *curs)))
		{
			ft_bitset(&counts, (t_byte)(fonds - chrs), 1);
			curs++;
		}
		*cursor = curs;
	}
	return (counts);
}
