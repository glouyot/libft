/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_base.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glouyot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/12 16:17:43 by glouyot           #+#    #+#             */
/*   Updated: 2016/12/12 17:10:48 by glouyot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_check_base(char *base)
{
	int	i;

	if (!(base) || ft_strlen(base) == 1)
		return (0);
	i = 0;
	while (base[i])
	{
		if (ft_strcchr(base, base[i]) > 1)
			return (0);
		i++;
	}
	return (1);
}
