/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glouyot <glouyot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/03 13:51:13 by glouyot           #+#    #+#             */
/*   Updated: 2017/04/03 14:16:38 by glouyot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(char const *s)
{
	int	ret;
	int	signe;

	ret = 0;
	while (ft_isspace(*s))
		s++;
	signe = (*s == '-');
	if (*s == '+' || *s == '-')
		s++;
	while (ft_isdigit(*s))
	{
		ret = ret * 10 + *s - 48;
		s++;
	}
	return (signe ? -ret : ret);
}
