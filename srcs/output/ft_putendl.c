/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glouyot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/04 11:15:35 by glouyot           #+#    #+#             */
/*   Updated: 2016/12/15 19:26:04 by glouyot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl(char const *s)
{
	if (!s)
	{
		ft_error("No string in ft_putendl input.");
		return ;
	}
	ft_putstr((char *)s);
	ft_putchar('\n');
}
