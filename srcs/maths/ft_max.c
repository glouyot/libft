#include "libft_maths.h"

inline int		ft_max(int n1, int n2)
{
	return (n1 < n2 ? n2 : n1);
}

inline t_ll		ft_llmax(t_ll n1, t_ll n2)
{
	return (n1 < n2 ? n2 : n1);
}

inline t_ull	ft_ullmax(t_ull n1, t_ull n2)
{
	return (n1 < n2 ? n2 : n1);
}

inline size_t	ft_smax(size_t n1, size_t n2)
{
	return (n1 < n2 ? n2 : n1);
}
