/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glouyot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/04 10:46:34 by glouyot           #+#    #+#             */
/*   Updated: 2016/12/15 18:12:40 by glouyot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

void	ft_putchar(char c)
{
	if (!c)
	{
		ft_error("No char in ft_putchar input.");
		return ;
	}
	write(1, &c, 1);
}
