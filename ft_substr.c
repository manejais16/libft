/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzarins <kzarins@student.42heilbronn.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 20:27:49 by kzarins           #+#    #+#             */
/*   Updated: 2024/10/12 21:16:32 by kzarins          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	len_s;
	char	*result;

	if (ft_strlen(s) < start)
	{
		result = (char *) malloc(1);
		*result = '\0';
		return (result);
	}
	len_s = ft_strlen(s + start);
	len_s++;
	if (len_s > len)
		len_s = len + 1;
	result = (char *) malloc(len_s);
	if (!result)
		return (0);
	ft_strlcpy(result, s + start,len_s);
	return (result);
}
