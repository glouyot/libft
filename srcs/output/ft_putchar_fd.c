/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glouyot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/04 10:47:20 by glouyot           #+#    #+#             */
/*   Updated: 2016/12/15 18:14:32 by glouyot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	if (!c)
	{
		ft_error("No char in ft_putchar_fd input.");
		return ;
	}
	write(fd, &c, 1);
}
