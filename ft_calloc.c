#include <stdlib.h>
void *ft_calloc(int nitems, int size)
{
	void		*ptr;

	ptr = (void *)malloc(nitems * size);
	if (!ptr)
		return (0);
	while (size)
	{
		*((char *) ptr + (size - 1)) = 0; 
		size--;
	}
	return (ptr);
}

int	main(void)
{
	void	*someval = ft_calloc(3,3);
	return (0);
}
