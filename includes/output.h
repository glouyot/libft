#ifndef OUTPUT_H
# define OUTPUT_H

# include <string.h>
# include <unistd.h>

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
void					ft_putnchar(char c, size_t len);
void					ft_putnstr(char *s, size_t len);
void					ft_putstr(char *s);
void					ft_putstr_color(char *s, char *color);
void					ft_putstr_fd(char *s, int fd);
void					ft_putstr_fd_color(char *s, int fd, char *color);


#endif
