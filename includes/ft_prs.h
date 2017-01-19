/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_prs.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glouyot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/29 10:56:17 by glouyot           #+#    #+#             */
/*   Updated: 2017/01/19 15:42:17 by glouyot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRS_H
# define FT_PRS_H

unsigned int	ft_prschr(char **cursor, char c);
t_byte			ft_prschrs(char **cursor, char const *chrs);
t_byte			ft_prsnbr(char **cursor, int *nbr);
unsigned int	ft_prsstr(char **cursor, char const *str);

#endif
