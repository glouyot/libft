/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glouyot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/09 14:15:17 by glouyot           #+#    #+#             */
/*   Updated: 2016/11/10 13:32:46 by glouyot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

t_list		*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*t;

	if (!(t = (t_list *)ft_memalloc(sizeof(t_list))))
		return (NULL);
	if (content == NULL)
	{
		t->content = NULL;
		content_size = 0;
	}
	else
	{
		if (!(t->content = ft_memalloc(content_size)))
		{
			ft_memdel((void **)&t);
			return (NULL);
		}
		ft_memcpy(t->content, content, content_size);
	}
	t->content_size = content_size;
	t->next = NULL;
	return (t);
}
