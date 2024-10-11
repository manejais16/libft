/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzarins <kzarins@student.42heilbronn.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 11:52:54 by kzarins           #+#    #+#             */
/*   Updated: 2024/10/10 10:21:03 by kzarins          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memcpy(void *to, const void *from, int numBytes)
{
	char		*to_temp;
	const char	*from_temp;

	if (from == 0 && to == 0)
		return (to);
	to_temp = to;
	from_temp = from;
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
		char *got = (char *) ft_memcpy((void *)to, (const void *)from[i], len[i]);
		char *expected = (char *) memcpy((void *)to2, (const void *)from[i], len[i]);
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
