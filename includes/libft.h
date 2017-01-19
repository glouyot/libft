/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glouyot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/04 09:59:06 by glouyot           #+#    #+#             */
/*   Updated: 2017/01/19 15:42:00 by glouyot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

typedef unsigned char	t_byte;

# include <string.h>
# include <unistd.h>
# include "get_next_line.h"
# include "ft_maths.h"
# include "ft_mem.h"
# include "ft_str.h"
# include "ft_err.h"
# include "ft_chr.h"
# include "ft_lst.h"
# include "ft_btree.h"
# include "ft_put.h"
# include "ft_bits.h"
# include "ft_prs.h"

# define WHITE			"\033[00m"
# define RED			"\033[31m"
# define BLUE			"\033[34m"
# define CYAN			"\033[36m"
# define GREEN			"\033[32m"
# define YELLOW			"\033[33m"
# define CANCEL			"\033[00m"


int						ft_atoi(char const *s);
int						ft_check_base(char *base);
size_t					ft_countwords(char *s, char c);
char					*ft_itoa(int n);
char					*ft_itoa_base(int n, char *base);
size_t					ft_nb_digit(long long n);
long long				ft_pow(long long nb, int pow);
char					*ft_two_comp(int nb);

#endif
