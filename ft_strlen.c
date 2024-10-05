// The original strlen function does not check if a 
// NULL pointer is given and it crashes!
// ft_strlen(NULL) == 0;
int	ft_strlen(const char *str)
{
	int	len;

	len = 0;
	if (str == 0)
		return (0);
	while (*str != '\0')
	{
		len++;
		str++;
	}
	return (len);
}

//Start of the Test
#include <stdio.h>
#include <string.h>

int main (void)
{
	int test_fail_flag = 0;
	printf("Running the test...\n");
	char *test_str[] = {"", "a", "hello", "abcdefghijklmnopqrstuvwxyz", "hello world", "hello\0world", "hello café"};
	for (int i = 0; i < 7; i++)
	{
		int got = ft_strlen(test_str[i]);
		int expected = strlen(test_str[i]);
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
