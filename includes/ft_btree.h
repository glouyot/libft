/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_btree.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glouyot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/29 13:02:34 by glouyot           #+#    #+#             */
/*   Updated: 2017/01/03 15:59:17 by glouyot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BTREE_H
# define FT_BTREE_H

enum					e_rb_color
{
	RB_BLACK,
	RB_RED
};

typedef struct			s_rb_node
{
	struct s_rb_node	*parent;
	struct s_rb_node	*left;
	struct s_rb_node	*right;
	void				*data;
	enum				color;
}						t_rb_node

typedef struct			s_btree
{
	void				*item;
	struct s_btree		*left;
	struct s_btree		*right;
}						t_btree;

t_btree					*ft_btree_create_node(void const *item);
void					ft_btree_apply_prefix(t_btree *root, void (*f)(void *));
void					ft_btree_apply_suffix(t_btree *root, void (*f)(void *));
void					ft_btree_apply_infix(t_btree *root, void (*f)(void *));

#endif
