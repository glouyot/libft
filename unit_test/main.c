/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glouyot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/12 16:10:11 by glouyot           #+#    #+#             */
/*   Updated: 2016/12/29 15:17:36 by glouyot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <fcntl.h>
#include <stdio.h>

int		main(int ac, char **av)
{
	if(ac || av)
		;
	t_btree *test;
	char	*i = "Salut";

	test = ft_btree_create_node(i);
	ft_putendl_color(test->item, GREEN);
}
