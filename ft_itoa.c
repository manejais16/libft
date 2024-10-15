// A function returns a string that represents an int
// Negative integares must be handled.

#include "libft.h"

char	*ft_itoa(int n)
{
	char	*result;


		
}

char	get_space_qty(int n)
{
	char	digits;
	
	digits = 0;
	if (n <= 0)
		digits++;
	while (n)
	{
		n /= 10;
		digits++;
	}
	return (digits);
}
