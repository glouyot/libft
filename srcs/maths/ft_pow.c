/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pow.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glouyot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/13 17:19:50 by glouyot           #+#    #+#             */
/*   Updated: 2016/12/14 13:58:16 by glouyot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

long long		ft_pow(long long nb, int pow)
{
	long long	ret;

	ret = 1;
	if (pow == 0)
		return (ret);
	while (pow--)
		ret *= (nb < 0 ? -nb : nb);
	return (ret);
}
