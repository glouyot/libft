/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pow.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glouyot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/13 17:19:50 by glouyot           #+#    #+#             */
/*   Updated: 2016/12/13 18:09:18 by glouyot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_pow(int nb, int pow)
{
	int ret;

	ret = 1;
	if (pow == 0)
		return (ret);
	while (pow--)
		ret *= nb;
	return (ret);
}
