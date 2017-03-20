/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glouyot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/20 10:34:10 by glouyot           #+#    #+#             */
/*   Updated: 2017/03/20 10:58:57 by glouyot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strdup(const char *s1)
{
	char	*ret;

	if (!(ret = ft_strnew(ft_strlen(s1))))
		return (NULL);
	while(s1++ && ret++)
		*ret = *s1;
	return (ret);
}
