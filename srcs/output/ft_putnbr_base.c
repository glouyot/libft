/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glouyot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/12 11:58:16 by glouyot           #+#    #+#             */
/*   Updated: 2016/12/12 17:10:46 by glouyot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_base(int nb, char *base)
{
	if (!(ft_check_base(base)))
		return ;
	if (nb < 0)
	{
		ft_putchar('-');
		ft_putnbr(-nb);
	}
	else if (nb < (int)ft_strlen(base))
		ft_putchar(base[nb]);
	else
	{
		ft_putnbr_base((nb / (int)ft_strlen(base)), base);
		ft_putchar(base[nb % ft_strlen(base)]);
	}
}
