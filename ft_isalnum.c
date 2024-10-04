int ft_isalnum(int ch)
{
	if (ch >= '0' && ch <= '9')
		return (4);
	if (ch >= 65 && ch <= 90) 
		return (1);
	if (ch >= 97 && ch <= 122)
		return (2);
	return (0);
}

//Start of the test
#include <ctype.h>
#include <stdio.h>
int main(void)
{
	int test_fail_flag = 0;
	printf("Running the test...\n");
	for(int i = 0; i <= 127; i += 2)
	{
		int got = ft_isalnum(i);
		int expected = isalnum(i);
		if(got == expected)
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
