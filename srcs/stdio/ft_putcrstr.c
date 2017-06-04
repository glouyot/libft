#include "libft.h"
#include <unistd.h>

void	ft_putcrstr(const char *src, int c)
{
	int		len;

	len = ft_strlen(src);
	if (len < c)
		write(1, src, c);
	else
	{

	}

}
