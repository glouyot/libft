/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glouyot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/05 10:13:33 by glouyot           #+#    #+#             */
/*   Updated: 2016/12/10 18:26:59 by glouyot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdlib.h>
# include <unistd.h>
# include "./libft.h"

# define BUFF_SIZE	1

typedef struct		s_gnl
{
	char			*buf;
	int				fd;
	int				i;
	int				count;
	int				nl;
	struct s_gnl	*next;
}					t_gnl;

int					get_next_line(int const fd, char **line);

#endif
