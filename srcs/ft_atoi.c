/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glouyot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/04 13:05:13 by glouyot           #+#    #+#             */
/*   Updated: 2016/11/04 14:16:44 by glouyot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int					ft_atoi(char const *s)
{
	unsigned int	i;
	int				signe;

	i = 0;
	while (ft_isspace(*s))
		s++;
	signe = (*s == '-');
	if (*s == '+' || *s == '-')
		s++;
	while (ft_isdigit(*s))
	{
		i = i * 10 + *s - 48;
		s++;
	}
	return (signe ? (int)-i : (int)i);
}
