/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glouyot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/04 09:59:06 by glouyot           #+#    #+#             */
/*   Updated: 2016/12/15 18:11:05 by glouyot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <string.h>
# include <unistd.h>
# include "get_next_line.h"
# include "libft_maths.h"
# include "output.h"
# include "memory.h"
# include "ft_strings.h"
# include "ft_error.h"
# include "ft_char.h"

# define WHITE			"\033[00m"
# define RED			"\033[31m"
# define BLUE			"\033[34m"
# define CYAN			"\033[36m"
# define GREEN			"\033[32m"
# define YELLOW			"\033[33m"
# define CANCEL			"\033[00m"

typedef unsigned char	t_byte;

typedef	struct			s_list
{
	void				*content;
	size_t				content_size;
	struct s_list		*next;
}						t_list;

int						ft_atoi(char const *s);
int						ft_check_base(char *base);
size_t					ft_countwords(char *s, char c);
void					ft_debug(int nb, char *s);
char					*ft_itoa(int n);
char					*ft_itoa_base(int n, char *base);
void					ft_lstadd(t_list **alst, t_list *new);
t_list					*ft_lstat(t_list *lst, size_t n);
size_t					ft_lstcount(t_list *lst);
void					ft_lstdel(t_list **alst, void (*del) (void *, size_t));
void					ft_lstdelone(t_list **alst,
		void (*del)(void *, size_t));
void					ft_lstiter(t_list *lst, void (*f)(t_list *elem));
t_list					*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem));
t_list					*ft_lstnew(void const *content, size_t content_size);
size_t					ft_nb_digit(long long n);
long long				ft_pow(long long nb, int pow);
char					*ft_two_comp(int nb);

#endif
