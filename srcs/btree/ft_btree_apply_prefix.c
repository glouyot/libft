/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_btree_apply_prefix.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glouyot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/29 14:29:59 by glouyot           #+#    #+#             */
/*   Updated: 2016/12/29 15:26:33 by glouyot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_btree_apply_prefix(t_btree *root, void (*f)(void *))
{
	if (root)
		(*f)(root->item);
	if (root->left != NULL)
		ft_btree_apply_prefix(root->left, (*f));
	if (root->right != NULL)
		ft_btree_apply_prefix(root->right, (*f));
}

void	ft_btree_apply_suffix(t_btree *root, void (*f)(void *))
{
	if (root)
		(*f)(root->item);
	if (root->left != NULL)
		ft_btree_apply_prefix(root->left, (*f));
	if (root->right != NULL)
		ft_btree_apply_prefix(root->right, (*f));
}

void	ft_btree_apply_infix(t_btree *root, void (*f)(void *))
{
	if (root)
		(*f)(root->item);
	if (root->left != NULL)
		ft_btree_apply_prefix(root->left, (*f));
	if (root->right != NULL)
		ft_btree_apply_prefix(root->right, (*f));
}
