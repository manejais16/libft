char *ft_strchr(const char *str, int search_str)
{
	if (str == 0)
		return (0);
	while (*str != '\0' && *str != search_str)
		str++;
	if (*str == '\0' && search_str != '\0')
		return (0);
	return ((char *)str);
}

//Start of the Test
#include <stdio.h>
#include <string.h>

int main (void)
{
	int test_fail_flag = 0;
	printf("Running the test...\n");
	char *test_str[] = {"Test 1", "Test 2", "Test 3", "TesT 4", "", "Test 6", "Test 7"};
	char test_char[] = {'1', 'e', 'x', 'T', 'a', '\0', 0};
	for (int i = 0; i < 7; i++)
	{
		char *got = ft_strchr(test_str[i], test_char[i]);
		char *expected = strchr(test_str[i], test_char[i]);
		if (got == expected)
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
