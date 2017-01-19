/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_prsstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glouyot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/29 10:59:47 by glouyot           #+#    #+#             */
/*   Updated: 2017/01/19 14:06:21 by glouyot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_prsstr(char **cursor, char const *str)
{
	int			i;
	char		*curs;

	if (str && cursor && (curs = *cursor))
	{
		i = 0;
		while (curs[i] == str[i] && str[i] != '\0')
			i++;
		if (str[i] == '\0')
		{
			*cursor = curs;
			return (i);
		}
	}
	return (0);
}
