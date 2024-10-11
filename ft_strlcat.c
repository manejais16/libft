/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzarins <kzarins@student.42heilbronn.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 12:02:02 by kzarins           #+#    #+#             */
/*   Updated: 2024/10/11 10:23:54 by kzarins          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	append_dst(char **dst, const char **str, \
		unsigned int *size, int *counter);

int	ft_strlcat(char *dst, const char *str, unsigned int size)
{
	int	counter;

	counter = 0;
	if (size == 0 && *str == '\0')
		return (0);
	while (*dst != '\0' && size > 0)
	{
		size--;
		dst++;
		counter++;
	}
	append_dst(&dst, &str, &size, &counter);
	if (size >= 1)
		*dst = '\0';
	while (*str != '\0')
	{
		str++;
		counter++;
	}
	return (counter);
}

void	append_dst(char **dst, const char **str, \
		unsigned int *size, int *counter)
{
	while (**str != '\0' && *size > 1)
	{
		**dst = **str;
		*size = *size - 1;
		*dst = *dst + 1;
		*str = *str + 1;
		*counter = *counter + 1;
	}
}
