#include "libft.h"

void		ft_putnchar(char c, size_t len)
{
	char	*str;

	if (!(str = ft_strnew(len)))
		return (ft_error("Malloc error in ft_putnchar."));
	ft_memset(str, c, len - 1);
	ft_putstr(str);
}
