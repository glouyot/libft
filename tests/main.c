#include "libft.h"
#include <fcntl.h>

int		main(int ac, char **av)
{
	int	fd = open(av[ac - 1], O_RDONLY);
	char *line;
	while (get_next_line(fd, &line) == 1)
		ft_putendl_color(line, GREEN);
}
