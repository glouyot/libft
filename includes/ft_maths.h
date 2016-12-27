#ifndef LIBFT_MATH_H
# define LIBFT_MATH_H

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

#endif
