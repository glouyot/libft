/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glouyot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/04 09:59:06 by glouyot           #+#    #+#             */
/*   Updated: 2016/11/27 15:46:56 by glouyot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <string.h>
# include <unistd.h>
# include <stdio.h>

# define WHITE			"\033[00m"
# define RED			"\033[31m"
# define BLUE			"\033[34m"
# define CYAN			"\033[36m"
# define GREEN			"\033[32m"
# define YELLOW			"\033[33m"
# define CANCEL			"\033[00m"
# define DEBUG			printf("Line %i, in file %s.\n", __LINE__, __FILE__);

typedef unsigned char	t_byte;

typedef	struct			s_list
{
	void				*content;
	size_t				content_size;
	struct s_list		*next;
}						t_list;

void					die(char *s);
int						ft_atoi(char const *s);
void					ft_bzero(void *block, size_t size);
size_t					ft_countwords(char *s, char c);
int						ft_isalnum(int c);
int						ft_isalpha(int c);
int						ft_isascii(int c);
int						ft_isdigit(int c);
int						ft_islower(int c);
int						ft_isspace(int c);
int						ft_isupper(int c);
int						ft_isprint(int c);
char					*ft_itoa(int n);
void					ft_lstadd(t_list **alst, t_list *new);
t_list					*ft_lstat(t_list *lst, size_t n);
size_t					ft_lstcount(t_list *lst);
void					ft_lstdel(t_list **alst, void (*del) (void *, size_t));
void					ft_lstdelone(t_list **alst,
		void (*del)(void *, size_t));
void					ft_lstiter(t_list *lst, void (*f)(t_list *elem));
t_list					*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem));
t_list					*ft_lstnew(void const *content, size_t content_size);
void					*ft_memalloc(size_t size);
void					*ft_memccpy(void *to, void const *src, int c, size_t s);
void					*ft_memchr(void const *s, int c, size_t n);
int						ft_memcmp(void const *s1, void const *s2, size_t n);
void					*ft_memcpy(void *to, void const *from, size_t size);
void					ft_memdel(void **ap);
void					*ft_memmove(void *to, void const *from, size_t size);
void					*ft_memrealloc(void *block, size_t size);
void					*ft_memset(void *block, int c, size_t size);
void					ft_putchar(char c);
void					ft_putchar_fd(char c, int fd);
void					ft_putendl(char const *s);
void					ft_putendl_fd(char const *s, int fd);
void					ft_putnbr(int nb);
void					ft_putnbr_fd(int nb, int fd);
void					ft_putstr(char *s);
void					ft_putstr_color(char *s, char *color);
void					ft_putstr_fd(char *s, int fd);
void					ft_putstr_fd_color(char *s, int fd, char *color);
char					*ft_strcat(char *dst, char const *src);
char					*ft_strchr(char const *s, int c);
void					ft_strclr(char *s);
int						ft_strcmp(char const *s1, char const *s2);
char					*ft_strcpy(char *dst, char const *src);
void					ft_strdel(char **as);
char					*ft_strdup(char const *s);
int						ft_strequ(char const *s1, char const *s2);
void					ft_striter(char *s, void (*f)(char *));
void					ft_striteri(char *s,
		void (*f)(unsigned int, char *));
char					*ft_strjoin(char const *s1, char const *s2);
char					*ft_strjoini(char const *s1, char const *s2, int f);
size_t					ft_strlcat(char *dst, char const *src, size_t n);
size_t					ft_strlen(char const *s);
char					*ft_strmap(char const *s, char (*f)(char));
char					*ft_strmapi(char const *s,
		char (*f)(unsigned int, char));
char					*ft_strncat(char *dst, char const *src, size_t n);
int						ft_strncmp(char const *s1, char const *s2, size_t n);
char					*ft_strncpy(char *dst, char const *src, size_t n);
int						ft_strnequ(char const *s1, char const *s2, size_t n);
char					*ft_strnew(size_t s);
char					*ft_strnstr(char const *s, char const *f, size_t n);
char					*ft_strrchr(char const *s, int c);
char					*ft_strrealloc(char *str, size_t s);
char					**ft_strsplit(char const *s, char c);
char					*ft_strsub(char const *s, unsigned int start,
		size_t len);
char					*ft_strstr(char const *src, char const *find);
char					*ft_strtrim(char const *s);
int						ft_tolower(int c);
int						ft_toupper(int c);

#endif
