#ifndef LIBFT_H
#define LIBFT_H

#include "libft.h"
int		ft_isalpha(int ch);
int		ft_isdigit(int ch);
int		ft_isalnum(int ch);
int		ft_isascii(int ch);
int		ft_isprint(int ch);
int		ft_strlen(const char *str);
void	*ft_memset(void *str, int c, int n);
void	*ft_bzero(void *str, int n);
void	*ft_memcpy(void *to, const void *from, int numBytes);
void	*ft_memmove(void *to, const void *from, int numBytes);
int		ft_strlcat(char *dst, const char *str, int size);
int		ft_toupper(int ch);
int		ft_tolower(int ch);
char	*ft_strchr(const char *str, int search_str);
char	*ft_strrchr(const char *str, int c);
int		ft_strncmp(const char *str1, const char *str2, int num);
char	*ft_memchr(const void *str, int c, int n);
int		ft_memcmp(const char *str1, const char *str2, int num);
char	*ft_strnstr(const char *big, const char *little, int len);
int		ft_atoi(const char *str);
#endif
