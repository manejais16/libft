/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzarins <kzarins@student.42heilbronn.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 14:05:12 by kzarins           #+#    #+#             */
/*   Updated: 2024/10/12 22:32:42 by kzarins          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include "libft.h"
# include <stdlib.h>

int		ft_isalpha(int ch);
int		ft_isdigit(int ch);
int		ft_isalnum(int ch);
int		ft_isascii(int ch);
int		ft_isprint(int ch);
size_t	ft_strlen(const char *str);
void	*ft_memset(void *str, int c, size_t n);
void	*ft_bzero(void *str, size_t n);
void	*ft_memcpy(void *to, const void *from, size_t numBytes);
void	*ft_memmove(void *to, const void *from, size_t numBytes);
int		ft_strlcpy(char *dst, const char *str, size_t size);
int		ft_strlcat(char *dst, const char *str, size_t size);
int		ft_toupper(int ch);
int		ft_tolower(int ch);
char	*ft_strchr(const char *str, int search_str);
char	*ft_strrchr(const char *str, int c);
int		ft_strncmp(const char *str1, const char *str2, size_t num);
char	*ft_memchr(const void *str, int c, size_t n);
int		ft_memcmp(const void *str1, const void *str2, size_t num);
char	*ft_strnstr(const char *heystack, const char *needle, size_t len);
int		ft_atoi(const char *str);
void	*ft_calloc(int nitems, size_t size);
char	*ft_strdup(const char *s1);
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strtrim(char const *s1, char const *set);
#endif
