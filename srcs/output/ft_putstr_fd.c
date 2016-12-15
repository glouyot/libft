/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glouyot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/04 11:00:36 by glouyot           #+#    #+#             */
/*   Updated: 2016/12/15 18:25:57 by glouyot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	if (!s)
	{
		ft_error("No string in ft_putstr_fd input.");
		return ;
	}
	write(fd, s, ft_strlen(s));
}
