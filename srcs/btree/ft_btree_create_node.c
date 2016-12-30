/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_btree_create_node.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glouyot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/29 14:29:25 by glouyot           #+#    #+#             */
/*   Updated: 2016/12/29 15:16:09 by glouyot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_btree		*ft_btree_create_node(void const *item)
{
	t_btree	*tmp;

	if (!(tmp = (t_btree *)ft_memalloc(sizeof(t_btree))))
	{
		ft_error("Malloc failure btree create node.");
		return (NULL);
	}
	if (item == NULL)
		tmp->item = NULL;
	else
	{
		if(!(tmp->item = ft_memalloc(sizeof(item))))
		{
			ft_memdel((void **)&tmp);
			ft_error("Malloc failure btree create node item.");
			return (NULL);
		}
		ft_memcpy(tmp->item, item, sizeof(item));
	}
	tmp->left = NULL;
	tmp->right = NULL;
	return (tmp);
}
