/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzarins <kzarins@student.42heilbronn.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 10:54:09 by kzarins           #+#    #+#             */
/*   Updated: 2024/10/12 21:10:53 by kzarins          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void	*ft_calloc(int nitems, size_t size)
{
	void	*ptr;
	size_t	temp;
	ptr = (void *)malloc(nitems * size);
	if (!ptr)
		return (0);
	while (nitems)
	{
		temp = 0;
		while (temp < size)
		{
			*(char *)(ptr + nitems * size - temp - 1) = 0;
			temp++;
		}
		nitems--;
	}
	return (ptr);
}
/*
int	main(void)
{
	void	*someval = ft_calloc(3,3);
	return (0);
}
*/
