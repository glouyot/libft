/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_btree.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glouyot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/29 13:02:34 by glouyot           #+#    #+#             */
/*   Updated: 2016/12/29 15:02:20 by glouyot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BTREE_H
# define FT_BTREE_H

typedef struct		s_btree
{
	void			*item;
	struct s_btree	*left;
	struct s_btree	*right;
}					t_btree;

t_btree				*ft_btree_create_node(void *item);

#endif
