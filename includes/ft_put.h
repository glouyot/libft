/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glouyot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/29 13:20:29 by glouyot           #+#    #+#             */
/*   Updated: 2016/12/29 13:31:55 by glouyot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PUT_H
# define FT_PUT_H

void					ft_putchar(char c);
void					ft_putchar_fd(char c, int fd);
void					ft_putendl(char const *s);
void					ft_putendl_color(char const *s, char *color);
void					ft_putendl_fd(char const *s, int fd);
void					ft_putendl_fd_color(char const *s, int fd, char *color);
void					ft_putnbr(int nb);
void					ft_putnbr_base(int nb, char *base);
void					ft_putnbr_fd(int nb, int fd);
void					ft_putnbr_fd_base(int nb, int fd, char *base);
void					ft_putstr(char *s);
void					ft_putstr_color(char *s, char *color);
void					ft_putstr_fd(char *s, int fd);
void					ft_putstr_fd_color(char *s, int fd, char *color);

#endif
