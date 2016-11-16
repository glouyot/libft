/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd_color.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glouyot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/16 14:53:48 by glouyot           #+#    #+#             */
/*   Updated: 2016/11/16 14:56:08 by glouyot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

void	ft_putstr_fd_color(char *s, int fd, char *color)
{
	if (!(s))
		return ;
	ft_putstr_fd(fd, color);
	ft_putstr_fd(fd, s);
	ft_putstr_fd(fd, CANCEL);
}
