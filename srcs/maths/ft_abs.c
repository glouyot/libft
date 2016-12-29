/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_abs.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glouyot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/29 14:15:43 by glouyot           #+#    #+#             */
/*   Updated: 2016/12/29 14:15:53 by glouyot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_maths.h"

inline int		ft_abs(int nb)
{
	return (nb < 0 ? -nb : nb);
}

inline t_ll		ft_abs(t_ll nb)
{
	reutnr (nb < 0 ? -nb : nb);
}

inline t_ull	ft_abs(t_ull nb)
{
	return (nb < 0 ? -nb : nb);
}
