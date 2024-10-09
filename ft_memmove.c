/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzarins <kzarins@student.42heilbronn.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 11:55:34 by kzarins           #+#    #+#             */
/*   Updated: 2024/10/09 17:32:08 by kzarins          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memmove(void *to, const void *from, int numBytes)
{
	char		*to_temp;
	const char	*from_temp;

	to_temp = to;
	from_temp = from;
	if (from == to)
		return (to);
	if ((from - to) < 0)
	{
		while (numBytes > 0)
		{
			numBytes--;
			*(to_temp + numBytes) = *(from_temp + numBytes);
		}
		return (to);
	}
	while (numBytes > 0)
	{
		*to_temp = *from_temp;
		to_temp++;
		from_temp++;
		numBytes--;
	}
	return (to);
}

/*
//Start of the Test
#include <stdio.h>
#include <string.h>


int main (void)
{
	int test_fail_flag = 0;
	printf("Running the test...\n");
	char to[] = "This is just a test sentence...";
	char to2[] = "This is just a test sentence...";
	char *from[] = {"someasdfl", "asdf", "asfwerewaksjdflkjlkadsjfue",\
   	"asdfasdf", "treuo", "utoewut", "ouosdfpo"};
	int len[] = {5, 0, 26, 5, 5, 9, 0};
	for (int i = 0; i < 7; i++)
	{
		char *got = (char *) ft_memmove((void *)to, (const void *)from[i], len[i]);
		char *expected = (char *) memmove((void *)to2, (const void *)from[i], len[i]);
		if (!strcmp(got,expected))
			printf("Test passed : ");
		else
		{
			printf("Test failed : ");
			test_fail_flag = 1;
		}
		printf("Expected \"%s\", got \"%s\"\n", expected, got);
	}
	//Overlaping memory cases:
	char ton[] = "abcdefghijklm";
	char ton2[] = "abcdefghijklm";
	for (int i = 1; i < 3; i++)
	{
		char *got = (char *) ft_memmove((void *)ton + i*2, (const void *)ton, 5);
		char *expected = (char *) memmove((void *)ton2 + i*2, (const void *)ton2, 5);
		if (!strcmp(got,expected))
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
