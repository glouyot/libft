/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_btree_add.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glouyot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/02 13:17:06 by glouyot           #+#    #+#             */
/*   Updated: 2017/01/04 13:06:23 by glouyot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_btree_add_right(t_btree *root, void *item)
{
	if (!root->right)
	{
		root->right = ft_btree_create_node(item);
	}
}

void		ft_btree_add(t_btree **root, void *item,
		int (*cmpf)(void *, void *))
{
	int		cmp;

	if (*root == NULL)
		ft_btree_create_node(item);
	while (*root)
	{
		if (&root->item != NULL)
		{
			cmp = (*cmpf)(*root->item, *item);
			break;
		}
		if (cmp >= 0)
		{
			!*root->right ? ft_btree_add_right(root, item) :
				*root = *root->right;
		}
		else
		{
			if (!*root->left)
			{
				*root->left = ft_btree_create_node(item);
				break;
			}
			else
				*root = *root->left;
		}
	}
}
