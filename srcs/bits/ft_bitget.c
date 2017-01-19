/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bitget.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glouyot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/29 10:58:07 by glouyot           #+#    #+#             */
/*   Updated: 2017/01/19 15:40:48 by glouyot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "libft.h"

t_byte	ft_bitget(void *bits, t_byte n)
{
	return ((((char *)bits)[n / 8] >> n % 8) & 1);
}