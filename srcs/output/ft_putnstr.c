#include "output.h"
#include "ft_error.h"
#include "libft_maths.h"
#include "ft_strings.h"

void		ft_putnstr(char *s, size_t n)
{
	if (!s)
		return (ft_error("No string in ft_putnstr input."));
	write(1, s, ft_min(ft_strlen(s), n));
}
