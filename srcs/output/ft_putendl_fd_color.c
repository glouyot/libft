/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd_color.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glouyot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/16 15:22:48 by glouyot           #+#    #+#             */
/*   Updated: 2016/12/15 18:32:21 by glouyot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd_color(char const *s, int fd, char *color)
{
	if (!s)
	{
		ft_error("No string in ft_putendl_fd_color input.");
		return ;
	}
	ft_putstr_fd_color((char *)s, fd, color);
	ft_putchar_fd('\n', fd);
}
