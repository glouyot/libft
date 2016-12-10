/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glouyot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/13 08:56:27 by glouyot           #+#    #+#             */
/*   Updated: 2016/12/10 18:37:48 by glouyot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static char			*get_append(t_gnl *gnl)
{
	int				i;

	i = 0;
	gnl->nl = 0;
	while (gnl->i + i < gnl->count)
	{
		if (gnl->buf[gnl->i + i] == '\n')
		{
			gnl->nl = 1;
			i++;
			break ;
		}
		i++;
	}
	gnl->i += i;
	return (ft_strsub(gnl->buf, gnl->i - i, i - gnl->nl));
}

static t_gnl		*get_gnl(t_list **lst, int fd)
{
	t_gnl		*gnl;
	t_list		*temp;

	temp = *lst;
	while (temp)
	{
		gnl = (t_gnl *)(temp->content);
		if (gnl->fd == fd)
			return (gnl);
		temp = temp->next;
	}
	if (!(gnl = (t_gnl *)ft_memalloc(sizeof(t_gnl))))
		return (NULL);
	if (!(gnl->buf = ft_strnew(BUFF_SIZE)))
		return (NULL);
	gnl->count = BUFF_SIZE;
	gnl->i = BUFF_SIZE;
	gnl->fd = fd;
	gnl->nl = 1;
	if (!(temp = ft_lstnew(gnl, sizeof(t_gnl))))
		return (NULL);
	ft_memdel((void **)&gnl);
	ft_lstadd(lst, temp);
	return ((t_gnl *)(temp->content));
}

static void			del_gnl(t_list **lst, int fd, char **str)
{
	t_gnl			*gnl;
	t_list			**temp;
	t_list			*ptr;

	temp = lst;
	while (*temp)
	{
		gnl = (t_gnl *)((*temp)->content);
		if (gnl->fd == fd)
			break ;
		*temp = ((*temp)->next);
	}
	if (*temp)
	{
		ptr = (*temp)->next;
		ft_strdel(&(gnl->buf));
		ft_memdel((void **)&gnl);
		ft_memdel((void **)temp);
		*temp = ptr;
	}
	ft_strdel(str);
}

static int			read_buffer(t_gnl *gnl, t_list **lst,
		char **temp, char **line)
{
	if (gnl->i == gnl->count)
	{
		gnl->count = read(gnl->fd, gnl->buf, BUFF_SIZE);
		if (gnl->count == -1)
		{
			del_gnl(lst, gnl->fd, temp);
			return (-1);
		}
		gnl->i = 0;
		if (gnl->count == 0 && gnl->nl == 0)
		{
			*line = *temp;
			return (1);
		}
	}
	return (0);
}

int					get_next_line(int const fd, char **line)
{
	static t_list	*lst = NULL;
	t_gnl			*gnl;
	char			*temp;
	int				ret;

	if (fd <= -1 || !(line) || ((gnl = get_gnl(&lst, fd)) == NULL) ||
			!(temp = ft_strnew(0)))
		return (-1);
	while (gnl->count > 0 && fd >= 0)
	{
		if ((ret = read_buffer(gnl, &lst, &temp, line)) != 0)
			return (ret);
		while (gnl->i < gnl->count)
		{
			temp = ft_strjoini(temp, get_append(gnl), 3);
			if (gnl->nl)
			{
				*line = temp;
				return (1);
			}
		}
	}
	del_gnl(&lst, fd, &temp);
	return (0);
}
