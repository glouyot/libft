#include "libft.h"

int		ft_strichr(const char *str, int c)
{
    while(*str++)
        if(*str == c)
            return (1);
    return (0);
}