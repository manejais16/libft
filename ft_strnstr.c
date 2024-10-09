/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzarins <kzarins@student.42heilbronn.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 12:32:31 by kzarins           #+#    #+#             */
/*   Updated: 2024/10/09 12:34:59 by kzarins          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static char	*ft_strchr(const char *str, int search_str, int *len_left);
static int		ft_strcmp(const char *str1, const char *str2);

char	*ft_strnstr(const char *big, const char *little, int len)
{
	char	*last_first_char_found;

	if (len == 0)
		return (0);
	if (*little == '\0')
		return ((char *) big);
	last_first_char_found = ft_strchr(big, *little, &len);
	while (last_first_char_found && len > 0)
	{
		if (ft_strcmp(last_first_char_found, little) == 0)
			return (last_first_char_found);
		big++;
		last_first_char_found = ft_strchr(big, *little, &len);
	}
	return (0);
}

static char	*ft_strchr(const char *str, int search_str, int *len_left)
{
	if (str == 0)
		return (0);
	while (*str != '\0' && *str != search_str)
	{
		str++;
		(*len_left)--;
	}
	if (*str == '\0' && search_str != '\0')
		return (0);
	return ((char *)str);
}

static int	ft_strcmp(const char *str1, const char *str2)
{
	while (*str1 != '\0' && *str2 != '\0')
	{
		if (*str1 != *str2)
			break ;
		str1++;
		str2++;
	}
	if (*str1 == *str2 || *str2 == '\0')
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
	char *test_str[] = {"hello world", "hello world", "hello world",\
   	"", "hello world", "hello world", "hello world", "hello world"};
	char *needle[] = {"world", "foo", "", "world", "hello world",\
   	"hello", "world", "world"};
	int comp_len[] = {11, 11, 11, 0, 11, 11, 11, 5};
	char *expect_results[] = {"world", 0, "hello world", 0, "hello world",\
   	"hello world", "world", 0};
	for (int i = 0; i < 8; i++)
	{
		char *got = ft_strnstr(test_str[i], needle[i], comp_len[i]);
		char *expected = expect_results[i]; 
		if (expected ==  0 && got == 0)
		{
			printf("Test passed : Expected \"NULL\", got \"NULL\"\n");
			continue;
		}
		if (!strcmp(got, expected))
			printf("Test passed : ");
		else
		{
			printf("Test failed : ");
			test_fail_flag = 1;
		}
		printf("Expected \"%s\", got \"%s\"\n", expected, got);
	}

	if (test_fail_flag == 1)
		printf("TEST FAILED!");
	else
		printf("TEST PASSED!");

	return (0);
}
*/
