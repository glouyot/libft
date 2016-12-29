/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_maths.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glouyot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/29 13:10:21 by glouyot           #+#    #+#             */
/*   Updated: 2016/12/29 14:11:29 by glouyot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_MATHS_H
# define FT_MATHS_H

# include <stddef.h>

typedef unsigned long long	t_ull;
typedef long long			t_ll;

int							ft_abs(int nb);
t_ll						ft_llabs(t_ll nb);
t_ull						ft_ullabs(t_ull nb);

int							ft_min(int n1, int n2);
t_ll						ft_llmin(t_ll n1, t_ll n2);
t_ull						ft_ullmin(t_ull n1, t_ull n2);
size_t						ft_smin(size_t n1, size_t n2);

int							ft_max(int n1, int n2);
t_ll						ft_llmax(t_ll n1, t_ll n2);
t_ull						ft_ullmax(t_ull n1, t_ull n2);
size_t						ft_smax(size_t n1, size_t n2);

int							ft_updiv(int n, int d);

long long					ft_pow(long long nb, int pow);

#endif
