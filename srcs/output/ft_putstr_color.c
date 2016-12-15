/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_color.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glouyot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/16 14:09:12 by glouyot           #+#    #+#             */
/*   Updated: 2016/12/15 18:16:18 by glouyot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_putstr_color(char *s, char *color)
{
	if (!(s))
	{
		ft_error("No string in ft_putstr_color input.");
		return ;
	}
	ft_putstr(color);
	ft_putstr(s);
	ft_putstr(CANCEL);
}
