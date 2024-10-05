#include <stdio.h>
void *ft_memset (void *str, int c, int n)
{
	void *temp;

	temp = str;
	while (n > 0)
	{
		 *(char *)str = (char) c;
		n--;
		(char *)str++;
	}
	return (temp);
}


//Start of the Test
#include <stdio.h>
#include <string.h>


int main (void)
{
	int test_fail_flag = 0;
	printf("Running the test...\n");
	char inputs1[] = "hello";
	char inputs2[] = "";
	char inputs3[] = "abcdefghijklmnopqrstuvwxyz";
	char inputs4[] = "hello world";
	char inputs5[] = "hello\0world";
	char inputs6[] = "hello café";
	char inputs7[] = "hello";
	char *test_str[] = {inputs1, inputs2, inputs3, inputs4, inputs5, inputs6, inputs7};
	char inputs1s[] = "hello";
	char inputs2s[] = "";
	char inputs3s[] = "abcdefghijklmnopqrstuvwxyz";
	char inputs4s[] = "hello world";
	char inputs5s[] = "hello\0world";
	char inputs6s[] = "hello café";
	char inputs7s[] = "hello";
	char *test_strs[] = {inputs1s, inputs2s, inputs3s, inputs4s, inputs5s, inputs6s, inputs7s};
	int test_char[] = {'x', 'x', '*', '-', 'x', '_', 'x'};
	int len[] = {5, 0, 26, 5, 5, 9, 0};
	for (int i = 0; i < 7; i++)
	{
		char *got = (char *) ft_memset((void *)test_strs[i], test_char[i], len[i]);
		char *expected = (char *) memset((void *)test_str[i], test_char[i], len[i]);
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
