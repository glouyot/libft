/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd_base.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glouyot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/12 12:17:26 by glouyot           #+#    #+#             */
/*   Updated: 2016/12/12 12:40:12 by glouyot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd_base(int nb, int fd, char *base)
{
	if (nb == -2147483648)
		ft_putstr_fd("-2147483648", fd);
	else if (nb < 0)
	{
		ft_putchar_fd(-nb, fd);
		ft_putnbr_fd_base(-nb, fd, base);
	}
	else if (nb < (int)ft_strlen(base))
		ft_putchar_fd(base[nb], fd);
	else
	{
		ft_putnbr_fd_base(nb / (int)ft_strlen(base), fd, base);
		ft_putchar_fd(base[nb % ft_strlen(base)], fd);
	}
}
