/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzarins <kzarins@student.42heilbronn.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 12:02:02 by kzarins           #+#    #+#             */
/*   Updated: 2024/10/09 17:34:30 by kzarins          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_strlcat(char *dst, const char *str, int size)
{
	int	count;

	count = 0;
	while (*dst)
	{
		count++;
		dst++;
	}
	if (size == 0)
		return (count);
	while (size > 1 && *str != '\0')
	{
		*dst = *str;
		size--;
		count++;
		str++;
		dst++;
	}
	*dst = '\0';
	while (*str)
	{
		count++;
		str++;
	}
	return (count);
}
/*
//Start of the Test
#include <stdio.h>
#include <string.h>

int main (void)
{
	int test_fail_flag = 0;
	char test_dest1[][30] = {"hello", "hello", "", "hello", "hello", "hello"};
	char test_str[][30] = {" world", " world is great", "hello",\
	" world", "a", " world"};
   	int test_size[] = {10, 5, 10, 10, 3, 6};
	char* test_expected[] = {"hello world", "hello wor", "hello",\
   	"hello world", "helloa", "hello worl"};
	int test_expected_size[] = {11, 20, 5, 11, 6, 11};
	printf("Running the test...\n");
	for (int i = 0; i < 6; i++)
	{
		int got = ft_strlcat(test_dest1[i], test_str[i], test_size[i]);
		int expected = test_expected_size[i]; 
		if (got == expected && !strcmp(test_dest1[i], test_expected[i]))
			printf("Test passed : ");
		else
		{
			printf("Test failed : ");
			test_fail_flag = 1;
		}
		printf("Expected \"%i\", got \"%i\"\n", expected, got);
	}

	if (test_fail_flag == 1)
		printf("TEST FAILED!");
	else
		printf("TEST PASSED!");

	return (0);
}
*/
