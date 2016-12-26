#include "libft_maths.h"

inline int		ft_min(int n1, int n2)
{
	return (n1 > n2 ? n2 : n1);
}

inline t_ll		ft_llmin(t_ll n1, t_ll n2)
{
	return (n1 > n2 ? n2 : n1);
}

inline t_ull	ft_ullmin(t_ull n1, t_ull n2)
{
	return (n1 > n2 ? n2 : n1);
}

inline size_t	ft_smin(size_t n1, size_t n2)
{
	return (n1 > n2 ? n2 : n1);
}
