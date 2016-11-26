/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_color.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glouyot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/16 15:21:28 by glouyot           #+#    #+#             */
/*   Updated: 2016/11/16 15:22:33 by glouyot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_color(char const *s, char *color)
{
	if (!s)
		return ;
	if (!(color))
		color = WHITE;
	ft_putstr_color((char *)s, color);
	ft_putchar('\n');
}
