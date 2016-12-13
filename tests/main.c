/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glouyot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/12 16:10:11 by glouyot           #+#    #+#             */
/*   Updated: 2016/12/13 11:45:18 by glouyot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <fcntl.h>
#include <stdio.h>

int		main(int ac, char **av)
{
	if(ac || av)
		;
	ft_putnbr_base(127,"01");
	ft_putendl("");
	ft_putnbr_base(-127,"01");
	ft_putendl("");
	printf("\n%o\n", 1239);
}
