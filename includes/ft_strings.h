#ifndef FT_STRINGS_H
# define FT_STRINGS_H

char					*ft_strcat(char *dst, char const *src);
int						ft_strcchr(char const *s, int c);
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


#endif
