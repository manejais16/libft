#define MAX_INT 2147483647
#define MIN_INT -2147483648

int isspace (int ch);

int ft_atoi (const char *str)
{
	char 	num_negat_flag;
	int	result;

	num_negat_flag = 0;
	result = 0;
	if (str == 0)
		return (0);
	while (isspace(*str))
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			num_negat_flag = 1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		if (!num_negat_flag)
			result = result * 10 + (*str - '0');
		else
			result = result * 10 - (*str - '0');
		if (!num_negat_flag && result < 0)
			return (MAX_INT);
		if (num_negat_flag && result > 0)
			return (MIN_INT);
		*str++;
	}
	return (result);
}

int isspace (int ch)
{
	if (ch == ' ' || ch == '\f' || ch == '\n' || ch == '\r' ||  ch == '\t' || ch == '\v')
		return (1);
	return (0);
}

//Start of the Test
#include <stdio.h>
#include <stdlib.h>

int main (void)
{
	int test_fail_flag = 0;
	printf("Running the test...\n");
	char* test_in[] = {"123", "-456", "   789", "123abc", "", "hello", "2147483648", "-2147483649", 0, "-2147463648"};
	for (int i = 0; i < 10; i++)
	{
		int got = ft_atoi(test_in[i]);
		int expected = atoi(test_in[i]); 
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
