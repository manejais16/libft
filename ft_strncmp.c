/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzarins <kzarins@student.42heilbronn.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 12:15:02 by kzarins           #+#    #+#             */
/*   Updated: 2024/10/09 17:39:25 by kzarins          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_strncmp(const char *str1, const char *str2, int num)
{
	while (num > 0 && *str1 != '\0' && *str2 != '\0')
	{
		if (*str1 != *str2)
			break ;
		num--;
		str1++;
		str2++;
	}
	if (*str1 == *str2)
		return (0);
	if (*str1 > *str2)
		return (1);
	else
		return (-1);
}
/*
//Start of the Test
#include <stdio.h>
#include <string.h>

int main (void)
{
	int test_fail_flag = 0;
	printf("Running the test...\n");
	char *test_str1[] = {"hello", "hello", "hello", "he",\
	"he\0llo", "hello", "hello", "he\0llx"};
	char *test_str2[] = {"hello", "hellx", "he", "hello",\
	"he\0llo", "hello", "", "he\0llo"};
	char comp_len[] = {5, 5, 5, 5, 5, 0, 2, 8};
	for (int i = 0; i < 8; i++)
	{
		int got = ft_strncmp(test_str1[i], test_str2[i], comp_len[i]);
		int expected = strncmp(test_str1[i], test_str2[i], comp_len[i]);
		if (got == expected)
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
