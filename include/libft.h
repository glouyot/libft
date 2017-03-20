/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glouyot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/11 13:59:41 by glouyot           #+#    #+#             */
/*   Updated: 2017/03/20 11:31:30 by glouyot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <string.h>

typedef unsigned char	t_byte;

void	*ft_memalloc(size_t size);
void	*ft_memset(void *block, int c, size_t size);
char	*ft_strdup(const char *s1);
size_t	ft_strlen(const char *s);
char	*ft_strnew(size_t size);

#endif
