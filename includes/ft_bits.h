/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bits.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glouyot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/29 10:55:55 by glouyot           #+#    #+#             */
/*   Updated: 2017/01/19 15:40:50 by glouyot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BITS_H
# define FT_BITS_H

t_byte			ft_bitget(void *bits, t_byte n);
void					ft_bitset(void *bits, t_byte n, t_byte x);

#endif
