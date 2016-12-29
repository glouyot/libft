/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mem.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glouyot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/29 13:33:10 by glouyot           #+#    #+#             */
/*   Updated: 2016/12/29 13:33:18 by glouyot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MEM_H
# define MEM_H

# include <stdlib.h>

void					ft_bzero(void *block, size_t size);
void					*ft_memalloc(size_t size);
void					*ft_memccpy(void *to, void const *src, int c, size_t s);
void					*ft_memchr(void const *s, int c, size_t n);
int						ft_memcmp(void const *s1, void const *s2, size_t n);
void					*ft_memcpy(void *to, void const *from, size_t size);
void					ft_memdel(void **ap);
void					*ft_memmove(void *to, void const *from, size_t size);
void					*ft_memrealloc(void *block, size_t size);
void					*ft_memset(void *block, int c, size_t size);


#endif
