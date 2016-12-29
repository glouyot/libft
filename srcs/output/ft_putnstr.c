/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glouyot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/29 14:15:15 by glouyot           #+#    #+#             */
/*   Updated: 2016/12/29 14:15:28 by glouyot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_putnstr(char *s, size_t n)
{
	if (!s)
		return (ft_error("No string in ft_putnstr input."));
	write(1, s, ft_min(ft_strlen(s), n));
}
