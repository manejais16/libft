#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	*result;

	result = ft_itoa(n);
	if (!result)
		return ;
	write(fd, result, ft_strlen(result));
	free(result);
}
