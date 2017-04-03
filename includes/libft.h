/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glouyot <glouyot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/23 11:56:27 by glouyot           #+#    #+#             */
/*   Updated: 2017/04/03 14:19:24 by glouyot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <string.h>

typedef unsigned char	t_byte;

int		ft_isalnum(int c);
int		ft_isalpha(int c);
int		ft_isascii(int c);
int		ft_isdigit(int c);
int		ft_islower(int c);
int		ft_isprint(int c);
int		ft_isspace(int c);
int		ft_isupper(int c);
void	*ft_memalloc(size_t size);
void	*ft_memset(void *block, int c, size_t size);
char	*ft_strdup(const char *s1);
size_t	ft_strlen(const char *s);
char	*ft_strnew(size_t size);
int		ft_atoi(char const *s);
char	*ft_itoa(int n);

#endif
