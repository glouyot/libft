/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glouyot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/12 16:10:11 by glouyot           #+#    #+#             */
/*   Updated: 2016/12/12 17:10:36 by glouyot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <fcntl.h>
#include <stdio.h>

int		main(int ac, char **av)
{
	if(ac || av)
		;
	ft_putnbr_base(-9,"0123456789abcdef");
	printf("\n%x\n", -9);
}
