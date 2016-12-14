/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glouyot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/12 16:10:11 by glouyot           #+#    #+#             */
/*   Updated: 2016/12/14 13:23:39 by glouyot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <fcntl.h>
#include <stdio.h>

int		main(int ac, char **av)
{
	if(ac || av)
		;
	for (int i = -2147483648 / 2; i > -2147483648; i--)
	{
		ft_putendl(ft_itoa_base(i, "01234567"));
		printf("%o\n", i);
	}
	ft_putendl(ft_itoa_base(-258963, "0123456789abcdef"));
	printf("%x\n", -258963);
	ft_putendl(ft_itoa_base(29, "0123456789abcdef"));
	printf("%x\n", 29);
}
