#include <stdio.h>
void *ft_memcpy(void *to, const void *from, int numBytes)
{
	void *temp;

	temp = to;
	if (from == to)
		return (temp);
	if ((from - to) < 0)
	{
		while (numBytes > 0)
		{
			numBytes--;
			*(char *) (to + numBytes) = *(char *) (from + numBytes);
		}
		return (temp);
	}
	while (numBytes > 0)
	{
		*(char *) to = *(char *) from;
		(char *)to++;
		(char *)from++;
		numBytes--;
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
	char to[] = "This is just a test sentence...";
	char to2[] = "This is just a test sentence...";
	char *from[] = {"someasdfl", "asdf", "asfwerewaksjdflkjlkadsjfue", "asdfasdf", "treuo", "utoewut", "ouosdfpo"};
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
	//Overlaping memory cases:
	char ton[] = "abcdefghijklm";
	char ton2[] = "abcdefghijklm";
	for (int i = 1; i < 3; i++)
	{
		char *got = (char *) ft_memcpy((void *)ton + i*2, (const void *)ton, 5);
		char *expected = (char *) memcpy((void *)ton2 + i*2, (const void *)ton2, 5);
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
