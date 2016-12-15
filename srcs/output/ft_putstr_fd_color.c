/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd_color.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glouyot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/16 14:53:48 by glouyot           #+#    #+#             */
/*   Updated: 2016/12/15 18:26:45 by glouyot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

void	ft_putstr_fd_color(char *s, int fd, char *color)
{
	if (!(s))
	{
		ft_error("No string in ft_putstr_fd_color input.");
		return ;
	}
	ft_putstr_fd(color, fd);
	ft_putstr_fd(s, fd);
	ft_putstr_fd(CANCEL, fd);
}
