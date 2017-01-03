/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_btree_apply.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glouyot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/29 14:29:59 by glouyot           #+#    #+#             */
/*   Updated: 2017/01/03 15:59:21 by glouyot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_btree_apply_prefix(t_btree *root, void (*f)(void *))
{
	if (root)
		(*f)(root->item);
	else
	{
		ft_error("Tree is NULL in apply_prefix");
		return ;
	}
	if (root->left != NULL)
		ft_btree_apply_prefix(root->left, (*f));
	if (root->right != NULL)
		ft_btree_apply_prefix(root->right, (*f));
}

void	ft_btree_apply_suffix(t_btree *root, void (*f)(void *))
{
	if (root->left != NULL)
		ft_btree_apply_suffix(root->left, (*f));
	if (root->right != NULL)
		ft_btree_apply_suffix(root->right, (*f));
	if (root)
		(*f)(root->item);
	else
	{
		ft_error("Tree is NULL in apply_suffix");
		return ;
	}
}

void	ft_btree_apply_infix(t_btree *root, void (*f)(void *))
{
	if (root->left != NULL)
		ft_btree_apply_infix(root->left, (*f));
	if (root)
		(*f)(root->item);
	else
	{
		ft_error("Tree is NULL in apply_infix");
		return ;
	}
	if (root->right != NULL)
		ft_btree_apply_infix(root->right, (*f));
}
