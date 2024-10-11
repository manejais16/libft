/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzarins <kzarins@student.42heilbronn.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 14:05:12 by kzarins           #+#    #+#             */
/*   Updated: 2024/10/11 17:27:40 by kzarins          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include "libft.h"

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
int		ft_strlcpy(char *dst, const char *str, int size);
int		ft_strlcat(char *dst, const char *str, unsigned int size);
int		ft_toupper(int ch);
int		ft_tolower(int ch);
char	*ft_strchr(const char *str, int search_str);
char	*ft_strrchr(const char *str, int c);
int		ft_strncmp(const char *str1, const char *str2, unsigned int num);
char	*ft_memchr(const void *str, int c, unsigned int n);
int		ft_memcmp(const void *str1, const void *str2, int num);
char	*ft_strnstr(const char *heystack, const char *needle, unsigned int len);
int		ft_atoi(const char *str);
void	*ft_calloc(int nitems, int size);
char	*ft_strdup(const char *s1);
#endif
